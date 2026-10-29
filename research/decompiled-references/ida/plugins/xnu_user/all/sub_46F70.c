__int64 __fastcall sub_46F70(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v8; // r12d

  v5 = *(_QWORD *)(a1 + 864);
  if ( !a4 )
    return sub_67700(v5, a2, 1537, 448, 0);
  LODWORD(result) = sub_67700(v5, a2, 0, 292, 0);
  v8 = result;
  if ( (int)result <= 0 || !a3 )
    return (unsigned int)result;
  *a3 = sub_71E80(a1, (unsigned int)result, 4096);
  return v8;
}

