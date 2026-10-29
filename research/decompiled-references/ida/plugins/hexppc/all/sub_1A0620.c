__int64 __fastcall sub_1A0620(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  bool v4; // zf
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD v10[6]; // [rsp+0h] [rbp-58h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v4 = *(_DWORD *)a3 == 2;
  v12 = __readfsqword(0x28u);
  if ( v4 && sub_1918A0((__int64)a1, (__int64)a3) )
  {
    result = 0xFFFFFFFFLL;
    if ( a1[13] )
      return result;
    v7 = a1[11];
    v8 = a1[10];
    if ( a1[12] < (unsigned __int64)(v7 + 1) )
    {
      v9 = qvector_reserve();
      a1[10] = v9;
      v8 = v9;
      v7 = a1[11];
    }
    *(_QWORD *)(v8 + 8 * v7) = a3;
    ++a1[11];
    goto LABEL_9;
  }
  v10[1] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[0] = off_4CB510;
  v10[5] = a1;
  v11 = 0;
  v10[2] = a2;
  result = sub_11BD20(a3, v10);
  if ( (_DWORD)result )
    return 0xFFFFFFFFLL;
  if ( v11 )
  {
LABEL_9:
    a1[13] = a3;
    result = 1;
    a1[14] = a2;
  }
  return result;
}

