__int64 __fastcall sub_450B0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1[1];
  v7[1] = __readfsqword(0x28u);
  v3 = a1[9] == 0;
  v4 = a1[5];
  v7[0] = v2;
  sub_45030(v4, !v3, v7);
  v5 = v7[0];
  free_idcv();
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}

