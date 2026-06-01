__int64 __fastcall sub_784F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 48) > 3u )
    v2 = sub_78480((_QWORD *)a2);
  else
    v2 = sub_78440((_QWORD *)a2) - 1;
  *(_QWORD *)(a1 + 8) = v2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_75A90(a2);
  result = (unsigned int)unpack_dd() - 1;
  *(_DWORD *)(a1 + 16) = result;
  return result;
}

