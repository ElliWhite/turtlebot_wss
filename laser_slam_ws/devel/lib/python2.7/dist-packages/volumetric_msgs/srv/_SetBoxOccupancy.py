# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from volumetric_msgs/SetBoxOccupancyRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class SetBoxOccupancyRequest(genpy.Message):
  _md5sum = "6588a1eb7f4c6adf70fa660225beeb92"
  _type = "volumetric_msgs/SetBoxOccupancyRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
geometry_msgs/Vector3 box_center
geometry_msgs/Vector3 box_size
bool set_occupied

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  __slots__ = ['box_center','box_size','set_occupied']
  _slot_types = ['geometry_msgs/Vector3','geometry_msgs/Vector3','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       box_center,box_size,set_occupied

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetBoxOccupancyRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.box_center is None:
        self.box_center = geometry_msgs.msg.Vector3()
      if self.box_size is None:
        self.box_size = geometry_msgs.msg.Vector3()
      if self.set_occupied is None:
        self.set_occupied = False
    else:
      self.box_center = geometry_msgs.msg.Vector3()
      self.box_size = geometry_msgs.msg.Vector3()
      self.set_occupied = False

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
      buff.write(_get_struct_6dB().pack(_x.box_center.x, _x.box_center.y, _x.box_center.z, _x.box_size.x, _x.box_size.y, _x.box_size.z, _x.set_occupied))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.box_center is None:
        self.box_center = geometry_msgs.msg.Vector3()
      if self.box_size is None:
        self.box_size = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 49
      (_x.box_center.x, _x.box_center.y, _x.box_center.z, _x.box_size.x, _x.box_size.y, _x.box_size.z, _x.set_occupied,) = _get_struct_6dB().unpack(str[start:end])
      self.set_occupied = bool(self.set_occupied)
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
      buff.write(_get_struct_6dB().pack(_x.box_center.x, _x.box_center.y, _x.box_center.z, _x.box_size.x, _x.box_size.y, _x.box_size.z, _x.set_occupied))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.box_center is None:
        self.box_center = geometry_msgs.msg.Vector3()
      if self.box_size is None:
        self.box_size = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 49
      (_x.box_center.x, _x.box_center.y, _x.box_center.z, _x.box_size.x, _x.box_size.y, _x.box_size.z, _x.set_occupied,) = _get_struct_6dB().unpack(str[start:end])
      self.set_occupied = bool(self.set_occupied)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6dB = None
def _get_struct_6dB():
    global _struct_6dB
    if _struct_6dB is None:
        _struct_6dB = struct.Struct("<6dB")
    return _struct_6dB
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from volumetric_msgs/SetBoxOccupancyResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetBoxOccupancyResponse(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "volumetric_msgs/SetBoxOccupancyResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetBoxOccupancyResponse, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class SetBoxOccupancy(object):
  _type          = 'volumetric_msgs/SetBoxOccupancy'
  _md5sum = '6588a1eb7f4c6adf70fa660225beeb92'
  _request_class  = SetBoxOccupancyRequest
  _response_class = SetBoxOccupancyResponse
