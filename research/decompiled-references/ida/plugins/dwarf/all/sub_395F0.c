__int64 __fastcall sub_395F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rax
  unsigned __int8 v6; // si
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  switch ( *(_BYTE *)(a1 + 142) )
  {
    case 0:
    case 5:
      return 0;
    case 1:
      v9[0] = 0xC7DDC813C3728202LL;
      v4 = sub_856E0(v9, a1 + 64);
      v5 = (__int64 *)sub_85650(v4, *(unsigned __int16 *)(a1 + 140));
      sub_349E0(a1, v5);
      goto LABEL_6;
    case 2:
    case 4:
      goto LABEL_2;
    default:
      v9[0] = 0xBCE6FBA20FC3AC63LL;
      sub_856E0(v9, a1 + 64);
      sub_85680(v9, *(unsigned int *)(a1 + 136));
      if ( *(_QWORD *)(a1 + 152) )
      {
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v7++);
          sub_856B0(v9, v9[0] ^ *(_QWORD *)(v8 + 72));
        }
        while ( v7 < *(_QWORD *)(a1 + 152) );
      }
      sub_349E0(a1, v9);
LABEL_6:
      if ( !*(_QWORD *)(a1 + 64) )
      {
LABEL_2:
        copy_tinfo_t(a2, a1 + 8);
        return 1;
      }
      if ( (unsigned __int8)sub_38360(a1) )
      {
        v6 = 4;
        if ( *(_BYTE *)(a1 + 142) == 1 )
          v6 = 2;
        sub_34840(a1, v6);
        copy_tinfo_t(a2, a1 + 8);
        return 1;
      }
      return 0;
  }
}

