# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication:srv/GaitSwitch.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GaitSwitch_Request(type):
    """Metaclass of message 'GaitSwitch_Request'."""

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
                'communication.srv.GaitSwitch_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gait_switch__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gait_switch__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gait_switch__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gait_switch__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gait_switch__request

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


class GaitSwitch_Request(metaclass=Metaclass_GaitSwitch_Request):
    """Message class 'GaitSwitch_Request'."""

    __slots__ = [
        '_header',
        '_gait_name',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'gait_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.gait_name = kwargs.get('gait_name', str())

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
        if self.gait_name != other.gait_name:
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
    def gait_name(self):
        """Message field 'gait_name'."""
        return self._gait_name

    @gait_name.setter
    def gait_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gait_name' field must be of type 'str'"
        self._gait_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GaitSwitch_Response(type):
    """Metaclass of message 'GaitSwitch_Response'."""

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
                'communication.srv.GaitSwitch_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gait_switch__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gait_switch__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gait_switch__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gait_switch__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gait_switch__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GaitSwitch_Response(metaclass=Metaclass_GaitSwitch_Response):
    """Message class 'GaitSwitch_Response'."""

    __slots__ = [
        '_is_success',
    ]

    _fields_and_field_types = {
        'is_success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_success = kwargs.get('is_success', bool())

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
        if self.is_success != other.is_success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_success(self):
        """Message field 'is_success'."""
        return self._is_success

    @is_success.setter
    def is_success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_success' field must be of type 'bool'"
        self._is_success = value


class Metaclass_GaitSwitch(type):
    """Metaclass of service 'GaitSwitch'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('communication')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication.srv.GaitSwitch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__gait_switch

            from communication.srv import _gait_switch
            if _gait_switch.Metaclass_GaitSwitch_Request._TYPE_SUPPORT is None:
                _gait_switch.Metaclass_GaitSwitch_Request.__import_type_support__()
            if _gait_switch.Metaclass_GaitSwitch_Response._TYPE_SUPPORT is None:
                _gait_switch.Metaclass_GaitSwitch_Response.__import_type_support__()


class GaitSwitch(metaclass=Metaclass_GaitSwitch):
    from communication.srv._gait_switch import GaitSwitch_Request as Request
    from communication.srv._gait_switch import GaitSwitch_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
