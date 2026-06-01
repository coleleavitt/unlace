_BOOL8 __fastcall sub_1140A0(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  bool v8; // zf
  __int64 v13; // rsi
  __int64 v16; // rdi
  char v17; // al
  _DWORD *v18; // r15
  _DWORD *v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  int *v25; // r9
  char v26; // al
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _DWORD *v35; // [rsp+8h] [rbp-60h]
  _DWORD *v37; // [rsp+18h] [rbp-50h]
  __int64 v38[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_DWORD *)a6 == 12;
  v38[1] = __readfsqword(0x28u);
  if ( !v8 )
    return 0;
  v13 = a1[1];
  v37 = (_DWORD *)(a6 + 48);
  v35 = (_DWORD *)(a6 + 32);
  v16 = *(_QWORD *)(*(_QWORD *)(v13 + 480) + 112LL);
  if ( a2 == 12 )
  {
    if ( (unsigned __int8)sub_308DF0(v16, v13, a7, a8, a5, a6 + 32) )
      goto LABEL_5;
    if ( (unsigned __int8)sub_308DF0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a5, v37) )
      goto LABEL_18;
    v26 = sub_308DF0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a3, a4);
LABEL_22:
    if ( !v26 )
      goto LABEL_7;
    if ( *(_BYTE *)(a6 + 32) != 4 || **(_DWORD **)(a6 + 40) != 11 )
      goto LABEL_5;
    goto LABEL_18;
  }
  if ( (unsigned __int8)sub_308CF0(v16, v13, a7, a8, a5, v35) )
  {
LABEL_5:
    v17 = sub_113A60((__int64)a1, a5, v35, (__int64)v37, a7, a8);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)sub_308CF0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a5, v37) )
  {
    v26 = sub_308CF0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a3, a4);
    goto LABEL_22;
  }
LABEL_18:
  v17 = sub_113A60((__int64)a1, a5, v37, (__int64)v35, a7, a8);
LABEL_6:
  if ( !v17 )
  {
LABEL_7:
    if ( *(_BYTE *)a4 != 4 )
      return 0;
    v18 = *(_DWORD **)(a4 + 8);
    if ( *v18 != 12 || !v18 )
      return 0;
    v19 = v18 + 8;
    if ( (unsigned __int8)sub_308DF0(*a1, a1[1], a7, a8, a3, v18 + 8) )
    {
      v20 = a1[10];
      v21 = a1[11];
      v22 = (__int64)(v18 + 12);
      v38[0] = v22;
      v23 = a1[9];
      if ( v21 < v20 + 1 )
      {
        v32 = qvector_reserve();
        a1[9] = v32;
        v23 = v32;
        v20 = a1[10];
      }
      *(_QWORD *)(v23 + 8 * v20) = v22;
    }
    else
    {
      if ( !(unsigned __int8)sub_308DF0(*a1, a1[1], a7, a8, a3, v18 + 12) )
        return 0;
      v27 = a1[10];
      v28 = a1[9];
      v38[0] = (__int64)(v18 + 8);
      v29 = a1[11];
      v30 = v27;
      v31 = v27 + 1;
      if ( (unsigned __int64)v38 < v28 || (unsigned __int64)v38 >= v28 + 8 * v29 )
      {
        if ( v29 < v31 )
        {
          v33 = qvector_reserve();
          v30 = a1[10];
          a1[9] = v33;
          v28 = v33;
        }
        *(_QWORD *)(v28 + 8 * v30) = v19;
      }
      else
      {
        if ( v29 < v31 )
        {
          v34 = qvector_reserve();
          a1[9] = v34;
          v28 = v34;
          v27 = a1[10];
        }
        *(_QWORD *)(v28 + 8 * v27) = v19;
      }
    }
    ++a1[10];
    v24 = a1[1];
    v38[0] = a5;
    v25 = (int *)sub_124F80(v24, v37, v38, 1);
    return v25 && (unsigned __int8)sub_113B10(a1, 0, v38[0], (int)v37, v38[0], v25, a7, a8);
  }
  return 1;
}

