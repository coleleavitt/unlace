__int64 __fastcall sub_1A860(__int64 a1, char a2)
{
  unsigned __int8 v2; // al

  v2 = getinf_flag();
  *(_BYTE *)(a1 + 792) = v2 | a2;
  return sub_380D0((unsigned __int8)(v2 | a2), v2);
}

