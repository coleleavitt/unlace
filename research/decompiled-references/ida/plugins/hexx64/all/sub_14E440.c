__int64 __fastcall sub_14E440(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx

  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v5 + 24) != *(_QWORD *)(a1 + 40) )
    return 0;
  if ( *(_DWORD *)v5 == 55 )
  {
    *(_DWORD *)(a1 + 48) += (unsigned __int8)sub_6B550(*(_QWORD *)(a1 + 16), a3, a2, v5, a5);
  }
  else if ( (unsigned int)(*(_DWORD *)v5 - 56) <= 1 )
  {
    *(_DWORD *)(a1 + 48) += (unsigned __int8)sub_FECE0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v5, a3);
  }
  return 0;
}

