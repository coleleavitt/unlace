__int64 __fastcall sub_128AB0(__int64 a1, __int16 *a2, unsigned __int8 *a3)
{
  if ( a2 != (__int16 *)a3 )
  {
    sub_1181E0((__int64)a2);
    sub_11EE80((__int64)a2, a3);
  }
  return sub_128150(a2, *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 16));
}

