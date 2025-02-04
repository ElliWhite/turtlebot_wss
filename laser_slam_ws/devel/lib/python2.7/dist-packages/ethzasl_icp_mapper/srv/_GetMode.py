# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ethzasl_icp_mapper/GetModeRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetModeRequest(genpy.Message):
  _md5sum = "70da9f49c8aff1c1eadda36f4cb53efb"
  _type = "ethzasl_icp_mapper/GetModeRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool localize
bool map
bool applyChange
"""
  __slots__ = ['localize','map','applyChange']
  _slot_types = ['bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       localize,map,applyChange

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetModeRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.localize is None:
        self.localize = False
      if self.map is None:
        self.map = False
      if self.applyChange is None:
        self.applyChange = False
    else:
      self.localize = False
      self.map = False
      self.applyChange = False

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
      buff.write(_get_struct_3B().pack(_x.localize, _x.map, _x.applyChange))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.localize, _x.map, _x.applyChange,) = _get_struct_3B().unpack(str[start:end])
      self.localize = bool(self.localize)
      self.map = bool(self.map)
      self.applyChange = bool(self.applyChange)
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
      buff.write(_get_struct_3B().pack(_x.localize, _x.map, _x.applyChange))
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
      _x = self
      start = end
      end += 3
      (_x.localize, _x.map, _x.applyChange,) = _get_struct_3B().unpack(str[start:end])
      self.localize = bool(self.localize)
      self.map = bool(self.map)
      self.applyChange = bool(self.applyChange)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B = None
def _get_struct_3B():
    global _struct_3B
    if _struct_3B is None:
        _struct_3B = struct.Struct("<3B")
    return _struct_3B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ethzasl_icp_mapper/GetModeResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetModeResponse(genpy.Message):
  _md5sum = "34feb3c27737328fa52508eefd06d5a5"
  _type = "ethzasl_icp_mapper/GetModeResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool localize
bool map


"""
  __slots__ = ['localize','map']
  _slot_types = ['bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       localize,map

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetModeResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.localize is None:
        self.localize = False
      if self.map is None:
        self.map = False
    else:
      self.localize = False
      self.map = False

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
      buff.write(_get_struct_2B().pack(_x.localize, _x.map))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 2
      (_x.localize, _x.map,) = _get_struct_2B().unpack(str[start:end])
      self.localize = bool(self.localize)
      self.map = bool(self.map)
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
      buff.write(_get_struct_2B().pack(_x.localize, _x.map))
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
      _x = self
      start = end
      end += 2
      (_x.localize, _x.map,) = _get_struct_2B().unpack(str[start:end])
      self.localize = bool(self.localize)
      self.map = bool(self.map)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
class GetMode(object):
  _type          = 'ethzasl_icp_mapper/GetMode'
  _md5sum = '11879a69b8d234b7e1458ef090e302c2'
  _request_class  = GetModeRequest
  _response_class = GetModeResponse
