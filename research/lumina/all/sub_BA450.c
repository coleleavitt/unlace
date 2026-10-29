_QWORD *__fastcall sub_BA450(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = operator new(0x18u);
  v3 = *a2;
  *(_DWORD *)(v2 + 8) = 1;
  *(_QWORD *)v2 = &off_239C68;
  *(_QWORD *)(v2 + 16) = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  *a1 = v2;
  return a1;
}
