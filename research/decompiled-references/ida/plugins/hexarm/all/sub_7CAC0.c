__int64 __fastcall sub_7CAC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v3 = a2;
  if ( *(_DWORD *)(a2 + 48) > 3u )
    v4 = sub_7C940((_QWORD *)a2);
  else
    v4 = sub_7C900((_QWORD *)a2) - 1;
  *(_QWORD *)(a1 + 16) = v4;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8)
    || (v3 = a2,
        *(_DWORD *)(a1 + 24) = unpack_dd() - 1,
        *(_QWORD *)(a1 + 40) = sub_7CA60(a2, 1u),
        *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8)) )
  {
    sub_79F50(v3);
  }
  result = (unsigned int)unpack_dd() - 1;
  *(_DWORD *)(a1 + 48) = result;
  return result;
}

