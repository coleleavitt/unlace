__int64 __fastcall sub_C030(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  __int64 v3; // rax

  v1 = *((_DWORD *)qword_1B140 + (get_byte() & 7));
  result = 0;
  if ( v1 != 0xFFFF )
  {
    v3 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
    *(_BYTE *)(v3 + 41) = 1;
    *(_WORD *)(v3 + 46) = v1;
    *(_BYTE *)(v3 + 45) = 1;
    return 1;
  }
  return result;
}

