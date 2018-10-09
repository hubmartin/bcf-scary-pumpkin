<a href="https://www.bigclown.com/"><img src="https://bigclown.sirv.com/logo.png" width="200" alt="BigClown Logo" align="right"></a>

# Scary Pumpkin

[![Travis](https://img.shields.io/travis/bigclownlabs/bcf-skeleton/master.svg)](https://travis-ci.org/bigclownlabs/bcf-skeleton)
[![Release](https://img.shields.io/github/release/bigclownlabs/bcf-skeleton.svg)](https://github.com/bigclownlabs/bcf-skeleton/releases)
[![License](https://img.shields.io/github/license/bigclownlabs/bcf-skeleton.svg)](https://github.com/bigclownlabs/bcf-skeleton/blob/master/LICENSE)
[![Twitter](https://img.shields.io/twitter/follow/BigClownLabs.svg?style=social&label=Follow)](https://twitter.com/BigClownLabs)

Topics :
* node/scary-pumpkin:0/pir/-/event-count
* node/scary-pumpkin:0/led-strip/-/effect/set
* node/scary-pumpkin:0/servo/p14/angle/set

Node-red import flow:

```
[{"id":"1fb8e2b0.d420fd","type":"tab","label":"pumpkin","disabled":false,"info":""},{"id":"466eb367.28b9ec","type":"mqtt out","z":"1fb8e2b0.d420fd","name":"","topic":"node/scary-pumpkin:0/led-strip/-/effect/set","qos":"","retain":"","broker":"29fba84a.b2af58","x":840,"y":280,"wires":[]},{"id":"ab24c5c0.975768","type":"inject","z":"1fb8e2b0.d420fd","name":"red pulse-color","topic":"","payload":"{\"type\":\"pulse-color\", \"wait\":50, \"color\":\"#ff0000\"}","payloadType":"str","repeat":"","crontab":"","once":false,"onceDelay":0.1,"x":500,"y":280,"wires":[["466eb367.28b9ec"]]},{"id":"55d259fc.f0f258","type":"inject","z":"1fb8e2b0.d420fd","name":"","topic":"","payload":"\"#200000(10)\"","payloadType":"str","repeat":"","crontab":"","once":false,"onceDelay":0.1,"x":870,"y":440,"wires":[["54911caa.b2b674"]]},{"id":"54911caa.b2b674","type":"mqtt out","z":"1fb8e2b0.d420fd","name":"","topic":"node/scary-pumpkin:0/led-strip/-/color/set","qos":"","retain":"","broker":"29fba84a.b2af58","x":1160,"y":480,"wires":[]},{"id":"16edb5de.77334a","type":"mqtt in","z":"1fb8e2b0.d420fd","name":"","topic":"node/scary-pumpkin:0/pir/-/event-count","qos":"2","broker":"29fba84a.b2af58","x":230,"y":400,"wires":[["dc8f970.db0b268","9d71db51.b7cd68","1856c64.3e9443a"]]},{"id":"dc8f970.db0b268","type":"delay","z":"1fb8e2b0.d420fd","name":"","pauseType":"delay","timeout":"3","timeoutUnits":"seconds","rate":"1","nbRateUnits":"1","rateUnits":"second","randomFirst":"1","randomLast":"5","randomUnits":"seconds","drop":false,"x":700,"y":500,"wires":[["3febe75d.86ab88","4bb17406.ceeb9c"]]},{"id":"9d71db51.b7cd68","type":"change","z":"1fb8e2b0.d420fd","name":"red pulsing","rules":[{"t":"set","p":"payload","pt":"msg","to":"{\"type\":\"pulse-color\", \"wait\":10, \"color\":\"#ff0000\"}","tot":"str"}],"action":"","property":"","from":"","to":"","reg":false,"x":510,"y":320,"wires":[["466eb367.28b9ec"]]},{"id":"3febe75d.86ab88","type":"change","z":"1fb8e2b0.d420fd","name":"still color","rules":[{"t":"set","p":"payload","pt":"msg","to":"\"#200000(10)\"","tot":"str"}],"action":"","property":"","from":"","to":"","reg":false,"x":880,"y":480,"wires":[["54911caa.b2b674"]]},{"id":"a8f8ac54.b628f","type":"inject","z":"1fb8e2b0.d420fd","name":"icicle","topic":"","payload":"{\"type\":\"icicle\", \"wait\":50, \"color\":\"#ff0000\"}","payloadType":"str","repeat":"","crontab":"","once":false,"onceDelay":0.1,"x":470,"y":240,"wires":[["466eb367.28b9ec"]]},{"id":"ee58a174.e4e32","type":"inject","z":"1fb8e2b0.d420fd","name":"color wipe","topic":"","payload":"{\"type\":\"color-wipe\", \"wait\":50, \"color\":\"#800000\"}","payloadType":"str","repeat":"","crontab":"","once":false,"onceDelay":0.1,"x":480,"y":200,"wires":[["466eb367.28b9ec"]]},{"id":"820d7e11.b4b55","type":"inject","z":"1fb8e2b0.d420fd","name":"stroboscope","topic":"","payload":"{\"type\":\"stroboscope\", \"wait\":50, \"color\":\"#0000ff\"}","payloadType":"str","repeat":"","crontab":"","once":false,"onceDelay":0.1,"x":470,"y":160,"wires":[["466eb367.28b9ec"]]},{"id":"94832bd5.41e3b8","type":"mqtt out","z":"1fb8e2b0.d420fd","name":"","topic":"node/scary-pumpkin:0/servo/p14/angle/set","qos":"","retain":"","broker":"29fba84a.b2af58","x":1160,"y":540,"wires":[]},{"id":"1856c64.3e9443a","type":"change","z":"1fb8e2b0.d420fd","name":"0","rules":[{"t":"set","p":"payload","pt":"msg","to":"0","tot":"str"}],"action":"","property":"","from":"","to":"","reg":false,"x":690,"y":600,"wires":[["94832bd5.41e3b8"]]},{"id":"4bb17406.ceeb9c","type":"change","z":"1fb8e2b0.d420fd","name":"180","rules":[{"t":"set","p":"payload","pt":"msg","to":"180","tot":"str"}],"action":"","property":"","from":"","to":"","reg":false,"x":870,"y":540,"wires":[["94832bd5.41e3b8"]]},{"id":"29fba84a.b2af58","type":"mqtt-broker","z":"","broker":"localhost","port":"1883","clientid":"","usetls":false,"compatmode":true,"keepalive":"60","cleansession":true,"birthTopic":"","birthQos":"0","birthPayload":"","willTopic":"","willQos":"0","willPayload":""}]
```

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT/) - see the [LICENSE](LICENSE) file for details.

---

Made with &#x2764;&nbsp; by [**HARDWARIO s.r.o.**](https://www.hardwario.com/) in the heart of Europe.
