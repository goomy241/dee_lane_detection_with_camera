# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lane_msgs:msg/LaneMarkingProjectedArrayBoth.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneMarkingProjectedArrayBoth(type):
    """Metaclass of message 'LaneMarkingProjectedArrayBoth'."""

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
            module = import_type_support('lane_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lane_msgs.msg.LaneMarkingProjectedArrayBoth')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_marking_projected_array_both
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_marking_projected_array_both
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_marking_projected_array_both
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_marking_projected_array_both
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_marking_projected_array_both

            from lane_msgs.msg import LaneMarkingProjected
            if LaneMarkingProjected.__class__._TYPE_SUPPORT is None:
                LaneMarkingProjected.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneMarkingProjectedArrayBoth(metaclass=Metaclass_LaneMarkingProjectedArrayBoth):
    """Message class 'LaneMarkingProjectedArrayBoth'."""

    __slots__ = [
        '_markings_left',
        '_markings_right',
    ]

    _fields_and_field_types = {
        'markings_left': 'sequence<lane_msgs/LaneMarkingProjected>',
        'markings_right': 'sequence<lane_msgs/LaneMarkingProjected>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['lane_msgs', 'msg'], 'LaneMarkingProjected')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['lane_msgs', 'msg'], 'LaneMarkingProjected')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.markings_left = kwargs.get('markings_left', [])
        self.markings_right = kwargs.get('markings_right', [])

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
        if self.markings_left != other.markings_left:
            return False
        if self.markings_right != other.markings_right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def markings_left(self):
        """Message field 'markings_left'."""
        return self._markings_left

    @markings_left.setter
    def markings_left(self, value):
        if __debug__:
            from lane_msgs.msg import LaneMarkingProjected
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, LaneMarkingProjected) for v in value) and
                 True), \
                "The 'markings_left' field must be a set or sequence and each value of type 'LaneMarkingProjected'"
        self._markings_left = value

    @builtins.property
    def markings_right(self):
        """Message field 'markings_right'."""
        return self._markings_right

    @markings_right.setter
    def markings_right(self, value):
        if __debug__:
            from lane_msgs.msg import LaneMarkingProjected
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, LaneMarkingProjected) for v in value) and
                 True), \
                "The 'markings_right' field must be a set or sequence and each value of type 'LaneMarkingProjected'"
        self._markings_right = value
