_BYTE *__fastcall sub_66B80(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rdx

  v2 = (_BYTE *)operator new(0x10u);
  v2[8] = 43;
  v3 = v2;
  *(_QWORD *)v2 = off_2374E8;
  if ( __CFADD__(a2, a1) )
  {
    if ( v2 )
      operator delete(v2, 0x10u);
    return nullptr;
  }
  return v3;
}
