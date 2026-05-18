__int64 __fastcall sub_D08A0(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  v2 = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
    v2 = (_DWORD *)(*(_QWORD *)(a1 + 136) + 24LL * (*(_DWORD *)(a1 + 144) - 1));
  v2[3] = *a2 >> 1;
  result = *a2 & 1;
  *((_WORD *)v2 + 1) = *(_WORD *)a2 & 1;
  return result;
}
