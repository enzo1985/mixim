package org.mixim.examples.baseNetwork;

import org.mixim.base.modules.BaseNetwork;
import org.mixim.modules.node.WirelessNode;


//
//This example shows the basic structure of an network using MiXiM.
//
//The network consists of three hosts which use the CSMAMacLayer as MAC layer,
//"SimplePathlossModel" as only AnalogueModel and a SNRThresholdDecider as Decider.
//
//The used Network- and Application layer can be defined in the omnetpp.ini. As default
//the BaseNetwLayer and BurstApplLayer are used.
//
//You can use this network as an template for you own simulation.
//
network TestBaseNetwork extends BaseNetwork
{
    parameters:
        int numNodes; // total number of hosts in the network

    submodules:
        node[numNodes]: WirelessNode {
            parameters:
                @display("p=170,50;i=device/wifilaptop");
                nicType = default("NicCSMA");
        }
}

