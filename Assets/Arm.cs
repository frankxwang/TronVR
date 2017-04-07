using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon;

public class Arm : Photon.MonoBehaviour {
	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info){
		if (stream.isReading) {
			transform.rotation = (Quaternion)stream.ReceiveNext();
			print (transform.rotation);
		}
	}
	void Start()
	{
		PhotonNetwork.ConnectUsingSettings("0.1");
	}
	void OnConnectedToMaster(){
		PhotonNetwork.CreateRoom ("Controller");
	}
}
