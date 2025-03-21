// PROJECT:       Micro-Manager
// SUBSYSTEM:     MMCore
//
// DESCRIPTION:   Signal I/O device instance wrapper
//
// COPYRIGHT:     University of California, San Francisco, 2014,
//                All Rights reserved
//
// LICENSE:       This file is distributed under the "Lesser GPL" (LGPL) license.
//                License text is included with the source distribution.
//
//                This file is distributed in the hope that it will be useful,
//                but WITHOUT ANY WARRANTY; without even the implied warranty
//                of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//
//                IN NO EVENT SHALL THE COPYRIGHT OWNER OR
//                CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
//                INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES.
//
// AUTHOR:        Mark Tsuchida

#include "SignalIOInstance.h"


int SignalIOInstance::SetGateOpen(bool open) { RequireInitialized(); return GetImpl()->SetGateOpen(open); }
int SignalIOInstance::GetGateOpen(bool& open) { RequireInitialized(); return GetImpl()->GetGateOpen(open); }
int SignalIOInstance::SetSignal(double volts) { RequireInitialized(); return GetImpl()->SetSignal(volts); }
int SignalIOInstance::GetSignal(double& volts) { RequireInitialized(); return GetImpl()->GetSignal(volts); }
int SignalIOInstance::GetLimits(double& minVolts, double& maxVolts) { RequireInitialized(); return GetImpl()->GetLimits(minVolts, maxVolts); }
int SignalIOInstance::IsDASequenceable(bool& isSequenceable) const { RequireInitialized(); return GetImpl()->IsDASequenceable(isSequenceable); }
int SignalIOInstance::GetDASequenceMaxLength(long& nrEvents) const { RequireInitialized(); return GetImpl()->GetDASequenceMaxLength(nrEvents); }
int SignalIOInstance::StartDASequence() { RequireInitialized(); return GetImpl()->StartDASequence(); }
int SignalIOInstance::StopDASequence() { RequireInitialized(); return GetImpl()->StopDASequence(); }
int SignalIOInstance::ClearDASequence() { RequireInitialized(); return GetImpl()->ClearDASequence(); }
int SignalIOInstance::AddToDASequence(double voltage) { RequireInitialized(); return GetImpl()->AddToDASequence(voltage); }
int SignalIOInstance::SendDASequence() { RequireInitialized(); return GetImpl()->SendDASequence(); }
