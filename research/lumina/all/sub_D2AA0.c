__int64 __fastcall sub_D2AA0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 40) > (int)a2 && (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * (int)a2), (*a3 = v3) != 0) )
    return 0;
  else
    return sub_D2930(a1, a2, a3);
}
