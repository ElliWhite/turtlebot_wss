; Auto-generated. Do not edit!


(cl:in-package nifti_teleop-msg)


;//! \htmlinclude ScanningAction.msg.html

(cl:defclass <ScanningAction> (roslisp-msg-protocol:ros-message)
  ((action_goal
    :reader action_goal
    :initarg :action_goal
    :type nifti_teleop-msg:ScanningActionGoal
    :initform (cl:make-instance 'nifti_teleop-msg:ScanningActionGoal))
   (action_result
    :reader action_result
    :initarg :action_result
    :type nifti_teleop-msg:ScanningActionResult
    :initform (cl:make-instance 'nifti_teleop-msg:ScanningActionResult))
   (action_feedback
    :reader action_feedback
    :initarg :action_feedback
    :type nifti_teleop-msg:ScanningActionFeedback
    :initform (cl:make-instance 'nifti_teleop-msg:ScanningActionFeedback)))
)

(cl:defclass ScanningAction (<ScanningAction>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ScanningAction>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ScanningAction)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name nifti_teleop-msg:<ScanningAction> is deprecated: use nifti_teleop-msg:ScanningAction instead.")))

(cl:ensure-generic-function 'action_goal-val :lambda-list '(m))
(cl:defmethod action_goal-val ((m <ScanningAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nifti_teleop-msg:action_goal-val is deprecated.  Use nifti_teleop-msg:action_goal instead.")
  (action_goal m))

(cl:ensure-generic-function 'action_result-val :lambda-list '(m))
(cl:defmethod action_result-val ((m <ScanningAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nifti_teleop-msg:action_result-val is deprecated.  Use nifti_teleop-msg:action_result instead.")
  (action_result m))

(cl:ensure-generic-function 'action_feedback-val :lambda-list '(m))
(cl:defmethod action_feedback-val ((m <ScanningAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nifti_teleop-msg:action_feedback-val is deprecated.  Use nifti_teleop-msg:action_feedback instead.")
  (action_feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ScanningAction>) ostream)
  "Serializes a message object of type '<ScanningAction>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_goal) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_result) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_feedback) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ScanningAction>) istream)
  "Deserializes a message object of type '<ScanningAction>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_goal) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_result) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_feedback) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ScanningAction>)))
  "Returns string type for a message object of type '<ScanningAction>"
  "nifti_teleop/ScanningAction")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ScanningAction)))
  "Returns string type for a message object of type 'ScanningAction"
  "nifti_teleop/ScanningAction")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ScanningAction>)))
  "Returns md5sum for a message object of type '<ScanningAction>"
  "6fcb554513996eb6c4e7aed296255b31")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ScanningAction)))
  "Returns md5sum for a message object of type 'ScanningAction"
  "6fcb554513996eb6c4e7aed296255b31")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ScanningAction>)))
  "Returns full string definition for message of type '<ScanningAction>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%ScanningActionGoal action_goal~%ScanningActionResult action_result~%ScanningActionFeedback action_feedback~%~%================================================================================~%MSG: nifti_teleop/ScanningActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ScanningGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: nifti_teleop/ScanningGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%byte START_SCANNING=0~%byte STOP_SCANNING=1~%byte action~%float64 speed~%~%================================================================================~%MSG: nifti_teleop/ScanningActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%ScanningResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: nifti_teleop/ScanningResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%byte SUCCESS=0~%byte WARNING=1~%byte ERROR=2~%byte result~%~%================================================================================~%MSG: nifti_teleop/ScanningActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%ScanningFeedback feedback~%~%================================================================================~%MSG: nifti_teleop/ScanningFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%byte ERROR=2~%byte WAITING_FOR_FIRST_SWIPE=3~%byte WAITING_FOR_COMPLETE_SWIPE=4~%byte READY=0~%byte status~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ScanningAction)))
  "Returns full string definition for message of type 'ScanningAction"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%ScanningActionGoal action_goal~%ScanningActionResult action_result~%ScanningActionFeedback action_feedback~%~%================================================================================~%MSG: nifti_teleop/ScanningActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ScanningGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: nifti_teleop/ScanningGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%byte START_SCANNING=0~%byte STOP_SCANNING=1~%byte action~%float64 speed~%~%================================================================================~%MSG: nifti_teleop/ScanningActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%ScanningResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: nifti_teleop/ScanningResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%byte SUCCESS=0~%byte WARNING=1~%byte ERROR=2~%byte result~%~%================================================================================~%MSG: nifti_teleop/ScanningActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%ScanningFeedback feedback~%~%================================================================================~%MSG: nifti_teleop/ScanningFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%byte ERROR=2~%byte WAITING_FOR_FIRST_SWIPE=3~%byte WAITING_FOR_COMPLETE_SWIPE=4~%byte READY=0~%byte status~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ScanningAction>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_goal))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_result))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_feedback))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ScanningAction>))
  "Converts a ROS message object to a list"
  (cl:list 'ScanningAction
    (cl:cons ':action_goal (action_goal msg))
    (cl:cons ':action_result (action_result msg))
    (cl:cons ':action_feedback (action_feedback msg))
))
