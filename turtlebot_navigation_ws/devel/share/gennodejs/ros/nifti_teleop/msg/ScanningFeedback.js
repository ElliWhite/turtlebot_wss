// Auto-generated. Do not edit!

// (in-package nifti_teleop.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ScanningFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.status = null;
    }
    else {
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ScanningFeedback
    // Serialize message field [status]
    bufferOffset = _serializer.byte(obj.status, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ScanningFeedback
    let len;
    let data = new ScanningFeedback(null);
    // Deserialize message field [status]
    data.status = _deserializer.byte(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a message object
    return 'nifti_teleop/ScanningFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a8c048d7f82b48973ae3db994d220aea';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    byte ERROR=2
    byte WAITING_FOR_FIRST_SWIPE=3
    byte WAITING_FOR_COMPLETE_SWIPE=4
    byte READY=0
    byte status
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ScanningFeedback(null);
    if (msg.status !== undefined) {
      resolved.status = msg.status;
    }
    else {
      resolved.status = 0
    }

    return resolved;
    }
};

// Constants for message
ScanningFeedback.Constants = {
  ERROR: 2,
  WAITING_FOR_FIRST_SWIPE: 3,
  WAITING_FOR_COMPLETE_SWIPE: 4,
  READY: 0,
}

module.exports = ScanningFeedback;
