__int64 __fastcall sub_119A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned int v6; // r12d
  char v8; // dl
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  char v13; // cl
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-30h]
  __int64 v21; // [rsp+10h] [rbp-28h]
  __int64 v22; // [rsp+18h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  *(_QWORD *)(a2 + 8) = -1;
  set_debug_event_code();
  qmutex_lock();
  if ( *(_BYTE *)(a1 + 2240) && !*(_BYTE *)(a1 + 2241) )
  {
    sub_19810(a1 + 952, 0);
    goto LABEL_5;
  }
  v5 = a1 + 952;
  if ( !*(_DWORD *)(a1 + 1028) )
  {
    if ( !(unsigned __int8)sub_1CA90(v5, a2, a3) )
    {
LABEL_5:
      v6 = -1;
      goto LABEL_6;
    }
    goto LABEL_12;
  }
  v8 = sub_1CA90(v5, a2, a3);
  v12 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
  if ( v8 )
  {
    switch ( *(_DWORD *)(a2 + 20) & 0xFFFFFFF )
    {
      case 0:
        v6 = 0;
        goto LABEL_6;
      case 2:
        sub_1D4F0(a1 + 952, 0);
        callui(1158, a2, &callui, v16, v17, v18, v19, v20, v21, v22);
        sub_19D90(a1 + 952, a2);
        break;
      case 4:
      case 9:
        goto LABEL_10;
      case 5:
      case 6:
      case 0xD:
        v13 = sub_1D4F0(a1 + 952, 0);
        v12 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
        if ( !v13 )
        {
          v6 = 1;
          goto LABEL_13;
        }
        if ( v12 == 13 )
        {
          v6 = 1;
          goto LABEL_14;
        }
        v15 = *(_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 20) == 5 )
        {
          v15 = *(_QWORD *)(a2 + 32);
          if ( v15 == -1 )
            v15 = *(_QWORD *)(a2 + 8);
        }
        callui(1157, *(unsigned int *)(a2 + 4), *(_QWORD *)(a2 + 8), v15, &callui, v14, v19, v20, v21, v22);
        break;
      case 8:
        sub_192D0(a1 + 952);
LABEL_10:
        sub_1D4F0(a1 + 952, 0);
        goto LABEL_11;
      case 0xE:
        if ( (unsigned __int8)sub_1D4F0(a1 + 952, (char *)&v19 + 7) )
        {
          sub_19D90(a1 + 952, a2);
          if ( HIBYTE(v19) )
            sub_19B90(a1 + 952);
        }
        v6 = 0;
        v12 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
        goto LABEL_13;
      default:
LABEL_11:
        callui(1158, a2, &callui, v9, v10, v11, v19, v20, v21, v22);
        break;
    }
LABEL_12:
    v6 = 1;
    v12 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    goto LABEL_13;
  }
  v6 = 0;
LABEL_13:
  if ( v12 )
LABEL_14:
    copy_debug_event();
LABEL_6:
  qmutex_unlock();
  return v6;
}

