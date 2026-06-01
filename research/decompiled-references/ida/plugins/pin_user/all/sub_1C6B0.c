__int64 __fastcall sub_1C6B0(__int64 a1, char *a2, unsigned int a3)
{
  char *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  size_t v8; // r12
  int v10; // eax
  bool v11; // zf
  size_t v12; // rax
  size_t v13; // r12
  void *v14; // rdi
  size_t v15; // r14
  void *v16; // rdi
  size_t v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-448h] BYREF
  __int64 v21; // [rsp+8h] [rbp-440h]
  char v22[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v23; // [rsp+418h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v4 = a2;
  if ( *(_DWORD *)(a1 + 84) )
    goto LABEL_44;
  if ( (int)sub_260D0(*(_QWORD *)(a1 + 24), a3) > 0 )
  {
    v20 = 0;
    v21 = -1;
    if ( (unsigned __int8)sub_18C50(a1, (__int64)&v20, 16) )
    {
      if ( (_DWORD)v20 != 5 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      sub_18640(a1, (__int64)"PACKET %d: event %x received\n", v21, HIDWORD(v20));
      if ( (unsigned __int8)sub_18C50(a1, a1 + 84, 1065) )
      {
LABEL_44:
        set_debug_event_code();
        *(_DWORD *)a2 = *(_DWORD *)(a1 + 88);
        *((_DWORD *)a2 + 1) = *(_DWORD *)(a1 + 92);
        v5 = *(_QWORD *)(a1 + 96);
        a2[16] = 0;
        *((_QWORD *)a2 + 1) = v5;
        switch ( *((_DWORD *)a2 + 5) & 0xFFFFFFF )
        {
          case 1:
          case 8:
          case 0xB:
            v6 = *(_QWORD *)(a1 + 1129);
            *((_QWORD *)a2 + 8) = -1;
            *((_QWORD *)a2 + 6) = v6;
            *((_QWORD *)a2 + 7) = *(unsigned int *)(a1 + 1137);
            goto LABEL_8;
          case 2:
          case 4:
            *((_DWORD *)a2 + 6) = *(_DWORD *)(a1 + 105);
            break;
          case 3:
          case 9:
          case 0xA:
LABEL_8:
            v7 = strlen((const char *)(a1 + 105));
            v8 = v7;
            if ( v7 )
            {
              v14 = *((void **)a2 + 3);
              v15 = v7 + 1;
              if ( *((_QWORD *)a2 + 5) < v7 + 1 )
              {
                v18 = qvector_reserve();
                *((_QWORD *)a2 + 3) = v18;
                v14 = (void *)v18;
              }
              *((_QWORD *)a2 + 4) = v15;
              memmove(v14, (const void *)(a1 + 105), v8);
              *(_BYTE *)(*((_QWORD *)a2 + 3) + v8) = 0;
            }
            else
            {
              *((_QWORD *)a2 + 4) = 0;
            }
            break;
          case 5:
            *((_QWORD *)a2 + 3) = *(_QWORD *)(a1 + 105);
            *((_QWORD *)a2 + 4) = *(_QWORD *)(a1 + 113);
            break;
          case 7:
            a2[28] = *(_BYTE *)(a1 + 109);
            *((_DWORD *)a2 + 6) = *(_DWORD *)(a1 + 105);
            *((_QWORD *)a2 + 4) = *(_QWORD *)(a1 + 110);
            v12 = strlen((const char *)(a1 + 118));
            v13 = v12;
            if ( v12 )
            {
              v16 = *((void **)a2 + 5);
              v17 = v12 + 1;
              if ( *((_QWORD *)a2 + 7) < v12 + 1 )
              {
                v19 = qvector_reserve();
                *((_QWORD *)a2 + 5) = v19;
                v16 = (void *)v19;
              }
              *((_QWORD *)a2 + 6) = v17;
              memmove(v16, (const void *)(a1 + 118), v13);
              *(_BYTE *)(*((_QWORD *)a2 + 5) + v13) = 0;
            }
            else
            {
              *((_QWORD *)a2 + 6) = 0;
            }
            break;
          default:
            break;
        }
        copy_debug_event();
        *(_DWORD *)(a1 + 84) = 0;
        if ( byte_3C448 )
        {
          if ( (*((_DWORD *)a2 + 5) & 0xFFFFFFF) == 0 )
            return 1;
          sub_22BC0(a2, v22, 1024);
          a2 = "RECV DEBEV %s\n";
          sub_18640(a1, (__int64)"RECV DEBEV %s\n", v22);
        }
        v10 = *((_DWORD *)v4 + 5) & 0xFFFFFFF;
        switch ( v10 )
        {
          case 1:
          case 11:
            v11 = *(_BYTE *)(a1 + 1256) == 0;
            *(_DWORD *)(a1 + 32) = *(_DWORD *)v4;
            if ( !v11 )
              goto LABEL_17;
            if ( (byte_3A5B0[0] & 3) == 0 )
              goto LABEL_17;
            if ( *(_QWORD *)(a1 + 1240) )
              goto LABEL_17;
            sub_1C370(a1);
            if ( !*(_QWORD *)(a1 + 1240) )
            {
              sub_BCD0(
                (__int64)"Nothing will be recorded to the trace buffer because\n"
                         "'Trace over debugger segments' option is enabled\n"
                         "and there is no appropriate segment.\n"
                         "Please clear the 'Debugger' flag of desired segments",
                a2);
              v11 = *(_QWORD *)(a1 + 1240) == 0;
              *(_BYTE *)(a1 + 1256) = 1;
              if ( v11 )
                goto LABEL_17;
            }
            *(_QWORD *)(a1 + 1240) = 0;
            v10 = *((_DWORD *)v4 + 5) & 0xFFFFFFF;
            goto LABEL_18;
          case 2:
            if ( !*(_BYTE *)(a1 + 80) )
              goto LABEL_19;
            set_debug_event_code();
            v10 = *((_DWORD *)v4 + 5) & 0xFFFFFFF;
LABEL_18:
            if ( v10 )
LABEL_19:
              *(_BYTE *)(a1 + 82) = 1;
            break;
          case 5:
          case 6:
          case 13:
            *(_DWORD *)(a1 + 76) = 1;
LABEL_17:
            v10 = *((_DWORD *)v4 + 5) & 0xFFFFFFF;
            goto LABEL_18;
          default:
            goto LABEL_18;
        }
        return 1;
      }
    }
  }
  return 0;
}

