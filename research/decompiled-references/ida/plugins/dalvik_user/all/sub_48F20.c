char *__fastcall sub_48F20(unsigned __int64 a1, unsigned __int8 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // esi
  __int64 v8; // rax
  char *v9; // r15
  __int16 v11; // cx
  _WORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  const char *v15; // rsi
  _QWORD *v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v17[1] = (_QWORD *)__readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( !*(_BYTE *)(a1 + 56) )
    {
      *(_BYTE *)(a1 + 57) = 0;
      *(_WORD *)(a1 + 58) = 0;
      if ( (unsigned __int8)sub_461A0(a1, a2, a3, a4) )
      {
        while ( 1 )
        {
          v7 = 10000;
          if ( unk_7FBE8 )
            v7 = -1;
          v8 = sub_45F40(a1, v7);
          v17[0] = (_QWORD *)v8;
          v9 = (char *)v8;
          if ( !v8 )
            break;
          if ( *(char *)(v8 + 24) < 0 )
          {
            if ( *(_DWORD *)(v8 + 20) == *(_DWORD *)(a1 + 48) )
            {
              v11 = *(_WORD *)(v8 + 25);
              if ( v11 )
              {
                *(_WORD *)(a1 + 58) = v11;
                v12 = *(_WORD **)a5;
                v13 = *(_QWORD *)a5 + 2LL * *(_QWORD *)(a5 + 8);
                if ( *(_QWORD *)a5 == v13 )
                  goto LABEL_29;
                while ( v11 != *v12 )
                {
                  if ( (_WORD *)v13 == ++v12 )
                    goto LABEL_29;
                }
                if ( v12 == (_WORD *)v13 )
                {
LABEL_29:
                  v14 = *(unsigned __int16 *)(v9 + 25);
                  if ( (__int16)v14 > 115 )
                  {
                    LOWORD(v14) = v14 - 500;
                    v15 = "UNKERROR Unknown error";
                    switch ( v14 )
                    {
                      case 0LL:
                        v15 = "INVALID_TAG object type id or class tag.";
                        break;
                      case 1LL:
                      case 5LL:
                        goto LABEL_32;
                      case 2LL:
                        v15 = "ALREADY_INVOKING Previous invoke not complete.";
                        break;
                      case 3LL:
                        v15 = "INVALID_INDEX Index is invalid.";
                        break;
                      case 4LL:
                        v15 = "INVALID_LENGTH The length is invalid.";
                        break;
                      case 6LL:
                        v15 = "INVALID_STRING The string is invalid.";
                        break;
                      case 7LL:
                        v15 = "INVALID_CLASS_LOADER The class loader is invalid.";
                        break;
                      case 8LL:
                        v15 = "INVALID_ARRAY The array is invalid.";
                        break;
                      case 9LL:
                        v15 = "TRANSPORT_LOAD Unable to load the transport.";
                        break;
                      case 10LL:
                        v15 = "TRANSPORT_INIT Unable to initialize the transport.";
                        break;
                      case 11LL:
                        v15 = "NATIVE_METHOD";
                        break;
                      case 12LL:
                        v15 = "INVALID_COUNT The count is invalid.";
                        break;
                      default:
                        break;
                    }
                  }
                  else if ( (v14 & 0x8000u) != 0LL )
                  {
LABEL_32:
                    v15 = "UNKERROR Unknown error";
                  }
                  else
                  {
                    switch ( *(_WORD *)(v9 + 25) )
                    {
                      case 0:
                        v15 = "NONE No error occurred.";
                        break;
                      case 0xA:
                        v15 = "INVALID_THREAD Passed thread is null, is not a valid thread or has exited.";
                        break;
                      case 0xB:
                        v15 = "INVALID_THREAD_GROUP Thread group invalid.";
                        break;
                      case 0xC:
                        v15 = "INVALID_PRIORITY Invalid priority.";
                        break;
                      case 0xD:
                        v15 = "THREAD_NOT_SUSPENDED If the specified thread has not been suspended by an event.";
                        break;
                      case 0xE:
                        v15 = "THREAD_SUSPENDED Thread already suspended.";
                        break;
                      case 0xF:
                        v15 = "THREAD_NOT_ALIVE Thread has not been started or is now dead.";
                        break;
                      case 0x14:
                        v15 = "INVALID_OBJECT If this reference type has been unloaded and garbage collected.";
                        break;
                      case 0x15:
                        v15 = "INVALID_CLASS Invalid class.";
                        break;
                      case 0x16:
                        v15 = "CLASS_NOT_PREPARED Class has been loaded but not yet prepared.";
                        break;
                      case 0x17:
                        v15 = "INVALID_METHODID Invalid method.";
                        break;
                      case 0x18:
                        v15 = "INVALID_LOCATION Invalid location.";
                        break;
                      case 0x19:
                        v15 = "INVALID_FIELDID Invalid field.";
                        break;
                      case 0x1E:
                        v15 = "INVALID_FRAMEID Invalid jframeID.";
                        break;
                      case 0x1F:
                        v15 = "NO_MORE_FRAMES There are no more Java or JNI frames on the call stack.";
                        break;
                      case 0x20:
                        v15 = "OPAQUE_FRAME Information about the frame is not available.";
                        break;
                      case 0x21:
                        v15 = "NOT_CURRENT_FRAME Operation can only be performed on current frame.";
                        break;
                      case 0x22:
                        v15 = "TYPE_MISMATCH The variable is not an appropriate type for the function used.";
                        break;
                      case 0x23:
                        v15 = "INVALID_SLOT Invalid slot.";
                        break;
                      case 0x28:
                        v15 = "DUPLICATE Item already set.";
                        break;
                      case 0x29:
                        v15 = "NOT_FOUND Desired element not found.";
                        break;
                      case 0x32:
                        v15 = "INVALID_MONITOR Invalid monitor.";
                        break;
                      case 0x33:
                        v15 = "NOT_MONITOR_OWNER This thread doesn't own the monitor.";
                        break;
                      case 0x34:
                        v15 = "INTERRUPT The call has been interrupted before completion.";
                        break;
                      case 0x3C:
                        v15 = "INVALID_CLASS_FORMAT The virtual machine attempted to read a class file and determined tha"
                              "t the file is malformed or otherwise cannot be interpreted as a class file.";
                        break;
                      case 0x3D:
                        v15 = "CIRCULAR_CLASS_DEFINITION A circularity has been detected while initializing a class.";
                        break;
                      case 0x3E:
                        v15 = "FAILS_VERIFICATION The verifier detected that a class file, though well formed, contained "
                              "some sort of internal inconsistency or security problem.";
                        break;
                      case 0x3F:
                        v15 = "ADD_METHOD_NOT_IMPLEMENTED Adding methods has not been implemented.";
                        break;
                      case 0x40:
                        v15 = "SCHEMA_CHANGE_NOT_IMPLEMENTED Schema change has not been implemented.";
                        break;
                      case 0x41:
                        v15 = "INVALID_TYPESTATE The state of the thread has been modified, and is now inconsistent.";
                        break;
                      case 0x42:
                        v15 = "HIERARCHY_CHANGE_NOT_IMPLEMENTED A direct superclass is different for the new class versio"
                              "n, or the set of directly implemented interfaces is different and canUnrestrictedlyRedefin"
                              "eClasses is false.";
                        break;
                      case 0x43:
                        v15 = "DELETE_METHOD_NOT_IMPLEMENTED The new class version does not declare a method declared in "
                              "the old class version and canUnrestrictedlyRedefineClasses is false.";
                        break;
                      case 0x44:
                        v15 = "UNSUPPORTED_VERSION A class file has a version number not supported by this VM.";
                        break;
                      case 0x45:
                        v15 = "NAMES_DONT_MATCH The class name defined in the new class file is different from the name i"
                              "n the old class object.";
                        break;
                      case 0x46:
                        v15 = "CLASS_MODIFIERS_CHANGE_NOT_IMPLEMENTED The new class version has different modifiers and a"
                              "nd canUnrestrictedlyRedefineClasses is false.";
                        break;
                      case 0x47:
                        v15 = "METHOD_MODIFIERS_CHANGE_NOT_IMPLEMENTED A method in the new class version has different mo"
                              "difiers than its counterpart in the old class version and and canUnrestrictedlyRedefineClasses is false.";
                        break;
                      case 0x63:
                        v15 = "NOT_IMPLEMENTED The functionality is not implemented in this virtual machine.";
                        break;
                      case 0x64:
                        v15 = "NULL_POINTER Invalid pointer.";
                        break;
                      case 0x65:
                        v15 = "ABSENT_INFORMATION Desired information is not available.";
                        break;
                      case 0x66:
                        v15 = "INVALID_EVENT_TYPE The specified event type id is not recognized.";
                        break;
                      case 0x67:
                        v15 = "ILLEGAL_ARGUMENT Illegal argument.";
                        break;
                      case 0x6E:
                        v15 = "OUT_OF_MEMORY The function needed to allocate memory and no more memory was available for allocation.";
                        break;
                      case 0x6F:
                        v15 = "ACCESS_DENIED Debugging has not been enabled in this virtual machine. JVMDI cannot be used.";
                        break;
                      case 0x70:
                        v15 = "VM_DEAD The virtual machine is not running.";
                        break;
                      case 0x71:
                        v15 = "INTERNAL An unexpected internal error has occurred.";
                        break;
                      case 0x73:
                        v15 = "UNATTACHED_THREAD The thread being used to call this function is not attached to the virtu"
                              "al machine. Calls must be made from attached threads.";
                        break;
                      default:
                        goto LABEL_32;
                    }
                  }
                  sub_11270((__int64)"JDWP error: %s\n", v15);
                  if ( byte_7FBE9 && *(_WORD *)(v9 + 25) == 99 )
                    sub_11340((__int64)"JDWP: cmd_set=%d cmd=%d is not implemented in this virtual machine\n", a2, a3);
                }
                else
                {
                  *(_BYTE *)(a1 + 57) = 1;
                }
LABEL_28:
                v9 = nullptr;
              }
              else
              {
                v17[0] = nullptr;
              }
              sub_44B80(v17);
              return v9;
            }
            sub_11270((__int64)"JDWP Error: unordered reply packet");
            goto LABEL_28;
          }
          sub_48DD0(a1, (const __m128i *)v8);
          if ( *(_QWORD *)v9 )
            qfree();
          operator delete(v9, 0x20u);
        }
        if ( !*(_BYTE *)(a1 + 56) )
        {
          sub_11270((__int64)"Timed out while waiting for a JWDP reply");
          *(_BYTE *)(a1 + 56) = 1;
        }
        sub_44B80(v17);
      }
    }
  }
  return nullptr;
}

