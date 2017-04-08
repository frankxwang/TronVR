using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon;

public class SendInfo : Photon.MonoBehaviour {
	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info){
		if (stream.isWriting) {
			stream.SendNext (AdaptGyro(Input.gyro.attitude));
			stream.SendNext (Input.acceleration.magnitude);
			print ("sent");
		}
	}
	static Quaternion AdaptGyro(Quaternion q)
	{
		return new Quaternion(q.x, q.y, -q.z, -q.w);
	}
	void Start()
	{
		PhotonNetwork.ConnectUsingSettings("0.1");
	}
	void OnConnectedToMaster(){
		PhotonNetwork.JoinRoom ("Controller");
		print ("connected");
	}
}
