__int64 __fastcall sub_1A4060(_QWORD *a1, __int64 a2, _BYTE *a3, double a4)
{
  bool v5; // zf
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  _QWORD v11[6]; // [rsp+0h] [rbp-58h] BYREF
  char v12; // [rsp+30h] [rbp-28h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v5 = *(_DWORD *)a3 == 2;
  v13 = __readfsqword(0x28u);
  if ( v5 && sub_1952E0((__int64)a1, (__int64)a3, a4) )
  {
    result = 0xFFFFFFFFLL;
    if ( a1[13] )
      return result;
    v8 = a1[11];
    v9 = a1[10];
    if ( a1[12] < (unsigned __int64)(v8 + 1) )
    {
      v10 = qvector_reserve((__int64)(a1 + 10), v9, v8 + 1, 8);
      a1[10] = v10;
      v9 = v10;
      v8 = a1[11];
    }
    *(_QWORD *)(v9 + 8 * v8) = a3;
    ++a1[11];
    goto LABEL_9;
  }
  v11[1] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[0] = &off_4DE3B0;
  v11[5] = a1;
  v12 = 0;
  v11[2] = a2;
  result = sub_11F760(a3, v11);
  if ( (_DWORD)result )
    return 0xFFFFFFFFLL;
  if ( v12 )
  {
LABEL_9:
    a1[13] = a3;
    result = 1;
    a1[14] = a2;
  }
  return result;
}

