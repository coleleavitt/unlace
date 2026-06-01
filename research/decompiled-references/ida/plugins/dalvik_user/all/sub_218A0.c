__int64 __fastcall sub_218A0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r9
  bool v8; // zf
  unsigned int v9; // ebx
  _DWORD *v11; // rsi
  unsigned __int8 v12; // al
  int v13; // r12d
  int v14; // r13d
  const char *v15; // rcx
  const char *v16; // rsi
  unsigned __int8 v17; // [rsp+Bh] [rbp-4Dh] BYREF
  int v18; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  __int128 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_36AC0(a1 + 1608) )
  {
    sub_11270((__int64)"IDB doesn't contain DEX information, it's impossible to debug it");
    return 0;
  }
  if ( a3 == 23946 )
    a3 = 23915;
  *(_BYTE *)(a1 + 1784) = 1;
  *(_DWORD *)(a1 + 1816) = a3;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1071, 0, 0, a3, &callui, v7);
  v8 = (_QWORD)xmmword_7FB38 == 0;
  *(_BYTE *)(a1 + 792) = debug[2] & 1;
  if ( v8 )
  {
    if ( !(unsigned __int8)sub_21460(nptr, a5) )
      return 0;
  }
  else if ( !(unsigned __int8)sub_21460((const char *)qword_7FB30, a5) )
  {
    return 0;
  }
  v9 = sub_20950(a5);
  if ( !(_BYTE)v9 )
    return 0;
  v19 = 0;
  v20 = 0;
  if ( !(unsigned __int8)sub_20A30((__int64)&v19, a5) )
  {
    v11 = (_DWORD *)v19;
    if ( *((_QWORD *)&v20 + 1) <= 7u )
    {
      v19 = qvector_reserve();
      v11 = (_DWORD *)v19;
    }
    *(_QWORD *)&v20 = 8;
    *v11 = 1313558101;
    *(_DWORD *)((char *)v11 + 3) = 1314344782;
    *(_BYTE *)(v19 + 7) = 0;
  }
  v12 = sub_20BB0(&v18, &v17, a5);
  v13 = v12;
  if ( v12 )
  {
    v13 = v17;
    v14 = v18;
    if ( v17 )
      v15 = " (ART)";
    else
      v15 = "";
  }
  else
  {
    v18 = 17;
    v14 = 17;
    v15 = "";
    v17 = 0;
  }
  v16 = nptr;
  if ( (_QWORD)v20 )
    v16 = (const char *)v19;
  sub_11340((__int64)"Target Android version %s, SDK version of the framework %d%s\n", v16, v14, v15);
  *(_DWORD *)(a1 + 1072) = v14;
  *(_DWORD *)(a1 + 1076) = v13;
  if ( (unsigned int)(v14 - 28) <= 1 )
  {
    sub_11340((__int64)"This version of Android restricts reading of local variables from the debugging target.\n");
    sub_11340((__int64)"Consider up- or downgrading the Android version.\n");
  }
  if ( word_7FB4A == 1 )
  {
    if ( *(int *)(a1 + 1072) > 27 )
      goto LABEL_22;
  }
  else if ( word_7FB4A != 2 )
  {
LABEL_22:
    sub_11340((__int64)"Object ID safety checks are disabled. IDA will try to guess unknown local variable types.\n");
    goto LABEL_23;
  }
  sub_11340((__int64)"Object ID safety checks are active. IDA will not do any type guessing on local variables.\n");
LABEL_23:
  sub_33A00();
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v9;
}

