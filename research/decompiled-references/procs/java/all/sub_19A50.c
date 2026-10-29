__int64 __fastcall sub_19A50(__int64 a1)
{
  int v1; // eax
  unsigned __int8 v3; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 33376);
  if ( !v1 )
    sub_19240();
  *(_DWORD *)(a1 + 33376) = v1 - 1;
  if ( qfread(*(_QWORD *)(a1 + 33312), &v3, 1) != 1 )
    sub_19220();
  return v3;
}
