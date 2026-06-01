unsigned __int64 __fastcall sub_44E10(__int64 *a1, char a2)
{
  const char *v2; // r15
  size_t v3; // r13
  __int64 v4; // rbp
  size_t v5; // r12
  __int64 v6; // rsi
  __int64 v8; // rax
  const char *v9; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v9 = nullptr;
  v10 = 0;
  switch ( a2 )
  {
    case 1:
      v3 = 12;
      v2 = "SINGLE_STEP,";
      goto LABEL_6;
    case 2:
      v3 = 11;
      v2 = "BREAKPOINT,";
      goto LABEL_6;
    case 3:
      v3 = 10;
      v2 = "FRAME_POP,";
      goto LABEL_6;
    case 4:
      v3 = 10;
      v2 = "EXCEPTION,";
      goto LABEL_6;
    case 5:
      v3 = 13;
      v2 = "USER_DEFINED,";
      goto LABEL_6;
    case 6:
      v3 = 13;
      v2 = "THREAD_START,";
      goto LABEL_6;
    case 7:
      v3 = 13;
      v2 = "THREAD_DEATH,";
      goto LABEL_6;
    case 8:
      v3 = 14;
      v2 = "CLASS_PREPARE,";
      goto LABEL_6;
    case 9:
      v3 = 13;
      v2 = "CLASS_UNLOAD,";
      goto LABEL_6;
    case 10:
      v3 = 11;
      v2 = "CLASS_LOAD,";
      goto LABEL_6;
    case 20:
      v3 = 13;
      v2 = "FIELD_ACCESS,";
      goto LABEL_6;
    case 21:
      v3 = 19;
      v2 = "FIELD_MODIFICATION,";
      goto LABEL_6;
    case 30:
      v3 = 16;
      v2 = "EXCEPTION_CATCH,";
      goto LABEL_6;
    case 40:
      v3 = 13;
      v2 = "METHOD_ENTRY,";
      goto LABEL_6;
    case 41:
      v3 = 12;
      v2 = "METHOD_EXIT,";
      goto LABEL_6;
    case 42:
      v3 = 30;
      v2 = "METHOD_EXIT_WITH_RETURN_VALUE,";
      goto LABEL_6;
    case 43:
      v3 = 24;
      v2 = "MONITOR_CONTENDED_ENTER,";
      goto LABEL_6;
    case 44:
      v3 = 26;
      v2 = "MONITOR_CONTENDED_ENTERED,";
      goto LABEL_6;
    case 45:
      v3 = 13;
      v2 = "MONITOR_WAIT,";
      goto LABEL_6;
    case 46:
      v3 = 15;
      v2 = "MONITOR_WAITED,";
      goto LABEL_6;
    case 90:
      v3 = 9;
      v2 = "VM_START,";
      goto LABEL_6;
    case 99:
      v3 = 9;
      v2 = "VM_DEATH,";
      goto LABEL_6;
    case 100:
      v3 = 16;
      v2 = "VM_DISCONNECTED,";
      goto LABEL_6;
    default:
      sub_13B20((__int64 *)&v9);
      v2 = nptr;
      if ( (_QWORD)v10 )
        v2 = v9;
      if ( !v2 )
        goto LABEL_11;
      v3 = strlen(v2);
LABEL_6:
      v4 = a1[1];
      v5 = v3;
      if ( v4 )
        v5 = --v4 + v3;
      v6 = *a1;
      if ( a1[2] < v5 + 1 )
      {
        v8 = qvector_reserve();
        *a1 = v8;
        v6 = v8;
      }
      a1[1] = v5 + 1;
      *(_BYTE *)(v6 + v5) = 0;
      memmove((void *)(v4 + *a1), v2, v3);
LABEL_11:
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
        qfree();
      }
      return v11 - __readfsqword(0x28u);
  }
}

