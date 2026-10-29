__int64 __fastcall sub_C44C0(__int64 a1)
{
  __int64 result; // rax
  _BYTE *v2; // rdx

  result = *(int *)(a1 + 144);
  v2 = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
    v2 = (_BYTE *)(*(_QWORD *)(a1 + 136) + 24LL * ((int)result - 1));
  if ( *v2 == 80 && (int)result > 0 )
  {
    result = *(_QWORD *)(a1 + 136) + 24 * result;
    *(_WORD *)(result - 22) = 1;
  }
  return result;
}
