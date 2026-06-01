__int64 __fastcall sub_3BF730(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *a1;
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v2;
  return 0;
}

