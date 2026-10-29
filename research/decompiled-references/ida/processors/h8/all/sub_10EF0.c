__int64 __fastcall sub_10EF0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rdx
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) == 38 && (*(_BYTE *)(a1 + 57) & 0xFB) == 1 )
  {
    v1 = same_value_jpt();
    if ( (_BYTE)v1 )
    {
      if ( *(_BYTE *)(a1 + 57) == 5 )
      {
        v3 = *(_QWORD *)(a1 + 64);
LABEL_8:
        *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v3;
        return v1;
      }
      if ( (unsigned __int8)sub_F340(*(_QWORD *)(a1 + 888), v4, a1 + 16, a1 + 56) )
      {
        LOWORD(v3) = v4[0];
        goto LABEL_8;
      }
    }
  }
  return 0;
}

