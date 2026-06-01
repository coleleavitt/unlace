unsigned __int64 __fastcall sub_3A8E0(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _WORD v18[2]; // [rsp+0h] [rbp-428h] BYREF
  __int16 v19; // [rsp+4h] [rbp-424h]
  unsigned __int64 v20; // [rsp+408h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_625A0(a2, v18, a3, (unsigned int)a4) )
    return v20 - __readfsqword(0x28u);
  v6 = a1[1];
  v7 = *a1;
  if ( a1[2] < (unsigned __int64)(v6 + 1) )
  {
    v15 = qvector_reserve();
    v6 = a1[1];
    *a1 = v15;
    v7 = v15;
  }
  v8 = v7 + 24 * v6;
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 8) = 0;
  ++a1[1];
  sub_31660((__int64 *)v8);
  if ( !v18[1] )
  {
    if ( !v19 )
      return v20 - __readfsqword(0x28u);
    goto LABEL_7;
  }
  v12 = a1[1];
  v13 = *a1;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v17 = qvector_reserve();
    v12 = a1[1];
    *a1 = v17;
    v13 = v17;
  }
  v14 = v13 + 24 * v12;
  *(_QWORD *)v14 = 0;
  *(_OWORD *)(v14 + 8) = 0;
  ++a1[1];
  sub_31660((__int64 *)v14);
  if ( v19 )
  {
LABEL_7:
    v9 = a1[1];
    v10 = *a1;
    if ( a1[2] < (unsigned __int64)(v9 + 1) )
    {
      v16 = qvector_reserve();
      v9 = a1[1];
      *a1 = v16;
      v10 = v16;
    }
    v11 = v10 + 24 * v9;
    *(_QWORD *)v11 = 0;
    *(_OWORD *)(v11 + 8) = 0;
    ++a1[1];
    sub_31660((__int64 *)v11);
  }
  return v20 - __readfsqword(0x28u);
}

