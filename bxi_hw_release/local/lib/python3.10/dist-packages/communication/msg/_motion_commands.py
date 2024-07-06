# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication:msg/MotionCommands.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionCommands(type):
    """Metaclass of message 'MotionCommands'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('communication')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication.msg.MotionCommands')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_commands
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_commands
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_commands
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_commands
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_commands

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionCommands(metaclass=Metaclass_MotionCommands):
    """Message class 'MotionCommands'."""

    __slots__ = [
        '_header',
        '_vel_des',
        '_height_des',
        '_yawdot_des',
        '_mode',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vel_des': 'geometry_msgs/Vector3',
        'height_des': 'float',
        'yawdot_des': 'float',
        'mode': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.vel_des = kwargs.get('vel_des', Vector3())
        self.height_des = kwargs.get('height_des', float())
        self.yawdot_des = kwargs.get('yawdot_des', float())
        self.mode = kwargs.get('mode', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.vel_des != other.vel_des:
            return False
        if self.height_des != other.height_des:
            return False
        if self.yawdot_des != other.yawdot_des:
            return False
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def vel_des(self):
        """Message field 'vel_des'."""
        return self._vel_des

    @vel_des.setter
    def vel_des(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'vel_des' field must be a sub message of type 'Vector3'"
        self._vel_des = value

    @builtins.property
    def height_des(self):
        """Message field 'height_des'."""
        return self._height_des

    @height_des.setter
    def height_des(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_des' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height_des' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height_des = value

    @builtins.property
    def yawdot_des(self):
        """Message field 'yawdot_des'."""
        return self._yawdot_des

    @yawdot_des.setter
    def yawdot_des(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yawdot_des' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yawdot_des' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yawdot_des = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode' field must be an integer in [-2147483648, 2147483647]"
        self._mode = value
