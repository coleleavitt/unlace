__int64 __fastcall sub_10C20(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // cc
  _QWORD *v22; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // rsi
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // eax
  _QWORD *v34; // rax
  _QWORD *v35; // r8
  _QWORD *v36; // rdi
  int v37; // edx
  __int64 v38; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 *v40[9]; // [rsp+10h] [rbp-48h] BYREF

  v40[3] = (unsigned __int64 *)__readfsqword(0x28u);
  *(_QWORD *)(a2 + 8) = -1;
  set_debug_event_code();
  if ( *(int *)(a1 + 1032) > 0 && (unsigned __int8)sub_10780(a1, (__int64)&v38, 0, v4, v5, v6) )
  {
    if ( *(_BYTE *)(a1 + 1027) )
    {
      *(_BYTE *)(a1 + 1027) = 0;
      ((void (__fastcall *)(__int64, unsigned __int64 **, __int64, __int64, __int64, __int64, __int64, unsigned __int64))callui)(
        1151,
        v40,
        v7,
        v8,
        v9,
        v10,
        v38,
        v39);
      v11 = v40[0];
      set_debug_event_code();
      v15 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
      if ( (unsigned int)v15 <= 0xB )
      {
        v16 = 2306;
        if ( _bittest64(&v16, v15) )
        {
          *(_QWORD *)(a2 + 48) = v11;
          *(_QWORD *)(a2 + 56) = 0;
          *(_QWORD *)(a2 + 64) = v11;
          v17 = sub_106F0(a1, 1, 2306, v12, v13, v14);
          v21 = *(_QWORD *)(a2 + 40) <= 8u;
          *(_DWORD *)a2 = 0;
          *(_QWORD *)(a2 + 8) = v17;
          v22 = *(_QWORD **)(a2 + 24);
          if ( v21 )
          {
            v29 = qvector_reserve();
            *(_QWORD *)(a2 + 24) = v29;
            v22 = (_QWORD *)v29;
          }
          *(_QWORD *)(a2 + 32) = 9;
          *v22 = 0x3E79616C7065723CLL;
          *(_BYTE *)(*(_QWORD *)(a2 + 24) + 8LL) = 0;
          if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 **, __int64, __int64, __int64, __int64, unsigned __int64))callui)(
                                  1054,
                                  1,
                                  v40,
                                  v18,
                                  v19,
                                  v20,
                                  v38,
                                  v39) )
          {
            *(_DWORD *)(a2 + 4) = HIDWORD(v40[0]);
            return 1;
          }
          return 1;
        }
      }
      goto LABEL_43;
    }
    if ( *(_BYTE *)(a1 + 1026) )
    {
      v24 = v39;
      *(_BYTE *)(a1 + 1026) = 0;
      *(_QWORD *)(a2 + 8) = v24;
      *(_DWORD *)(a2 + 4) = HIDWORD(v38);
      goto LABEL_12;
    }
    if ( *(_BYTE *)(a1 + 1040) )
    {
      v30 = v39;
      *(_BYTE *)(a1 + 1040) = 0;
      *(_QWORD *)(a2 + 8) = v30;
      *(_DWORD *)(a2 + 4) = HIDWORD(v38);
      set_debug_event_code();
      *(_BYTE *)(a1 + 1025) = 1;
      return 1;
    }
    if ( *(_BYTE *)(a1 + 1028) )
    {
      v32 = v39;
      *(_BYTE *)(a1 + 1028) = 0;
      *(_BYTE *)(a1 + 1025) = 0;
      *(_QWORD *)(a2 + 8) = v32;
      *(_DWORD *)(a2 + 4) = HIDWORD(v38);
      set_debug_event_code();
      return 1;
    }
    if ( *(_BYTE *)(a1 + 1025) )
    {
      v31 = v39;
      *(_BYTE *)(a1 + 1025) = 0;
      *(_QWORD *)(a2 + 8) = v31;
      *(_DWORD *)(a2 + 4) = HIDWORD(v38);
      set_debug_event_code();
      return 1;
    }
    v25 = (unsigned int)v38;
    if ( *(_BYTE *)(a1 + 1041) || (v26 = v39, !(unsigned __int8)sub_10BC0(a1, v39)) || (unsigned int)(v25 - 1) > 2 )
    {
      v27 = *(unsigned int *)(a1 + 1032);
      v28 = v27 - 1;
      if ( (_DWORD)v25 != 6 )
      {
        *(_DWORD *)(a1 + 1032) = v28;
        *(_BYTE *)(a1 + 1041) = 0;
        return 0;
      }
      *(_DWORD *)(a1 + 1032) = v28;
      if ( !(unsigned __int8)callui(1139, v27, a2, &callui, v9, v25, v38, v39, v40[0], v40[1]) )
        goto LABEL_45;
      v33 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
      if ( (unsigned int)(v33 - 8) > 1 )
      {
        if ( v33 == 1 )
        {
          *(_BYTE *)(a1 + 1041) = 0;
          return 0;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 1036) = *(_DWORD *)(a1 + 1032);
      }
      return 1;
    }
    v34 = *(_QWORD **)(a1 + 880);
    v35 = (_QWORD *)(a1 + 872);
    if ( v34 )
    {
      v36 = (_QWORD *)(a1 + 872);
      do
      {
        if ( v34[4] >= v26 )
        {
          v36 = v34;
          v34 = (_QWORD *)v34[2];
        }
        else
        {
          v34 = (_QWORD *)v34[3];
        }
      }
      while ( v34 );
      if ( v36 != v35 )
      {
        if ( v26 >= v36[4] )
        {
LABEL_41:
          v37 = HIDWORD(v38);
          *(_QWORD *)(a2 + 8) = v36[5];
          *(_DWORD *)(a2 + 4) = v37;
          set_debug_event_code();
          *(_BYTE *)(a1 + 1041) = 1;
          return 1;
        }
        v35 = v36;
      }
    }
    v40[0] = &v39;
    v36 = sub_D780((_QWORD *)(a1 + 864), v35, v40);
    goto LABEL_41;
  }
LABEL_12:
  set_debug_event_code();
  if ( (((*(_DWORD *)(a2 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a2 + 24) = 0;
    return 1;
  }
  sub_D680(a2, 2);
LABEL_43:
  if ( under_debugger )
    goto LABEL_47;
  interr();
LABEL_45:
  if ( under_debugger )
LABEL_47:
    BUG();
  interr();
  return sub_11050(619);
}

