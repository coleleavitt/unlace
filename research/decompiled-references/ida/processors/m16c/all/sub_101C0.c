__int64 __fastcall sub_101C0(__int64 a1)
{
  __int16 v1; // ax

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 2) != 0;
  v1 = ((unsigned __int16)get_byte() >> 4) & 3;
  if ( *((_DWORD *)qword_1B5E0 + (v1 & 3)) == 30 )
    return 0;
  else
    return sub_E930(a1, *((_DWORD *)qword_1B5E0 + (char)v1));
}

