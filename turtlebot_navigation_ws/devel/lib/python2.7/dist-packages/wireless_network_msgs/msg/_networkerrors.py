# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from wireless_network_msgs/networkerrors.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class networkerrors(genpy.Message):
  _md5sum = "235edb359781a06294f8b29034894b78"
  _type = "wireless_network_msgs/networkerrors"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header

#segment errors at (tcp) protocol level
int64 retransmits
int64 badsegments

#errors in udp transmission
int64 udperrors

#system level (MAC layer) errors
int64 tx_retires
int64 rx_dropped


#interface level (NIC statistics) errors
int64 nic_tx_errors
int64 nic_rx_errors
int64 nic_tx_dropped
int64 nic_rx_dropped

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  __slots__ = ['header','retransmits','badsegments','udperrors','tx_retires','rx_dropped','nic_tx_errors','nic_rx_errors','nic_tx_dropped','nic_rx_dropped']
  _slot_types = ['std_msgs/Header','int64','int64','int64','int64','int64','int64','int64','int64','int64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,retransmits,badsegments,udperrors,tx_retires,rx_dropped,nic_tx_errors,nic_rx_errors,nic_tx_dropped,nic_rx_dropped

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(networkerrors, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.retransmits is None:
        self.retransmits = 0
      if self.badsegments is None:
        self.badsegments = 0
      if self.udperrors is None:
        self.udperrors = 0
      if self.tx_retires is None:
        self.tx_retires = 0
      if self.rx_dropped is None:
        self.rx_dropped = 0
      if self.nic_tx_errors is None:
        self.nic_tx_errors = 0
      if self.nic_rx_errors is None:
        self.nic_rx_errors = 0
      if self.nic_tx_dropped is None:
        self.nic_tx_dropped = 0
      if self.nic_rx_dropped is None:
        self.nic_rx_dropped = 0
    else:
      self.header = std_msgs.msg.Header()
      self.retransmits = 0
      self.badsegments = 0
      self.udperrors = 0
      self.tx_retires = 0
      self.rx_dropped = 0
      self.nic_tx_errors = 0
      self.nic_rx_errors = 0
      self.nic_tx_dropped = 0
      self.nic_rx_dropped = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_9q().pack(_x.retransmits, _x.badsegments, _x.udperrors, _x.tx_retires, _x.rx_dropped, _x.nic_tx_errors, _x.nic_rx_errors, _x.nic_tx_dropped, _x.nic_rx_dropped))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 72
      (_x.retransmits, _x.badsegments, _x.udperrors, _x.tx_retires, _x.rx_dropped, _x.nic_tx_errors, _x.nic_rx_errors, _x.nic_tx_dropped, _x.nic_rx_dropped,) = _get_struct_9q().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_9q().pack(_x.retransmits, _x.badsegments, _x.udperrors, _x.tx_retires, _x.rx_dropped, _x.nic_tx_errors, _x.nic_rx_errors, _x.nic_tx_dropped, _x.nic_rx_dropped))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 72
      (_x.retransmits, _x.badsegments, _x.udperrors, _x.tx_retires, _x.rx_dropped, _x.nic_tx_errors, _x.nic_rx_errors, _x.nic_tx_dropped, _x.nic_rx_dropped,) = _get_struct_9q().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_9q = None
def _get_struct_9q():
    global _struct_9q
    if _struct_9q is None:
        _struct_9q = struct.Struct("<9q")
    return _struct_9q
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
