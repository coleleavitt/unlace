__int64 __fastcall sub_401780(__int64 a1)
{
  int v1; // esi
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  char **v5; // rbx

  v1 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)v1 <= 0x27Du )
  {
    if ( (unsigned __int16)v1 <= 0x279u )
    {
      if ( (unsigned __int16)v1 > 0x156u )
      {
        if ( (unsigned __int16)(v1 - 412) <= 3u )
          return sub_3FF260(a1, v1 - 411);
      }
      else if ( (unsigned __int16)v1 > 0x152u )
      {
        return sub_3FF580(a1, v1 - 338, nullptr);
      }
      goto LABEL_14;
    }
    v3 = 633;
    v4 = nullptr;
    return sub_3FF580(a1, v1 - v3, v4);
  }
  if ( (unsigned __int16)v1 <= 0x281u )
  {
    v3 = 637;
    v4 = "_dup";
    return sub_3FF580(a1, v1 - v3, v4);
  }
  if ( (unsigned __int16)(v1 - 769) <= 3u )
    return sub_3FF260(a1, v1 - 768);
LABEL_14:
  v5 = &off_4E4180;
  do
  {
    result = sub_3FFBC0(a1, (__int64)v5);
    if ( (_BYTE)result )
      break;
    v5 += 2;
  }
  while ( v5 != (char **)&unk_4E5990 );
  return result;
}

