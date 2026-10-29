__int64 __fastcall sub_3E9300(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  _QWORD v7[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+30h] [rbp-18h]
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 8);
  v9 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 64);
  v7[2] = a2;
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = off_4D6AF8;
  v7[5] = v3;
  v8 = 0;
  v7[3] = a3;
  sub_11BD20(a3, v7);
  result = v8;
  if ( v8 )
  {
    sub_9EAE0(a2, (__int64)"PPC optimizer %d", v8);
    return v8;
  }
  return result;
}

