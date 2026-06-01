__int64 __fastcall sub_4BDC0(__int64 a1)
{
  int v1; // edx
  char v2; // r12
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned __int64 *v14; // rax
  __int128 v15; // [rsp+0h] [rbp-198h] BYREF
  __int64 v16; // [rsp+10h] [rbp-188h]
  __int64 v17; // [rsp+18h] [rbp-180h]
  __int64 v18; // [rsp+20h] [rbp-178h]
  _BYTE v19[320]; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v20; // [rsp+168h] [rbp-30h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 40);
  v20 = __readfsqword(0x28u);
  switch ( v1 )
  {
    case '5':
    case '8':
      v2 = 1;
      if ( (_WORD)v1 != 53 )
        goto LABEL_3;
      goto LABEL_7;
    case '7':
    case 'D':
      v2 = 0;
      if ( (_WORD)v1 == 68 )
        goto LABEL_7;
LABEL_3:
      v3 = sub_80350(*(_QWORD *)(a1 + 888), a1 + 16, a1 + 56);
      v4 = *(int *)(a1 + 964);
      if ( (_DWORD)v4 == -1 || *(_QWORD *)(a1 + 8 * v4 + 384) < v3 )
        goto LABEL_5;
      v13 = *(unsigned __int16 *)(a1 + 42);
      v16 = -1;
      v17 = 0;
      v8 = *(_QWORD *)(a1 + 32) + v13;
      v14 = (unsigned __int64 *)v19;
      v18 = 0;
      v15 = -1;
      do
      {
        *(_WORD *)v14 = 0;
        v14 += 5;
        *((_WORD *)v14 - 19) = 0;
        *((_WORD *)v14 - 18) = 0;
        *((_DWORD *)v14 - 2) = 0;
        *((_WORD *)v14 - 17) = 0;
        *((_OWORD *)v14 - 2) = 0;
        *(v14 - 2) = 0;
      }
      while ( v14 != &v20 );
      if ( (int)decode_insn() > 0 && (_WORD)v17 == 86 )
        v8 = sub_80350(*(_QWORD *)(a1 + 888), &v15, v19);
      v7 = *(_QWORD *)(a1 + 32);
LABEL_12:
      v12 = *(_QWORD *)(a1 + 864);
      *(_QWORD *)(v12 + 96) = v7;
      *(_QWORD *)(v12 + 80) = 25344;
      *(_QWORD *)(v12 + 88) = 0;
      *(_QWORD *)(v12 + 104) = v8;
      *(_BYTE *)(v12 + 112) = v2;
      *(_WORD *)(v12 + 113) = 0;
      *(_BYTE *)(v12 + 115) = 0;
      result = 1;
      break;
    case 'U':
      v2 = 2;
LABEL_7:
      v6 = sub_80350(*(_QWORD *)(a1 + 888), a1 + 16, a1 + 56);
      v7 = *(_QWORD *)(a1 + 32);
      v8 = v6;
      if ( v7 >= v6 )
        goto LABEL_12;
      v9 = *(_QWORD *)(a1 + 800);
      if ( v9 < v8 )
        goto LABEL_12;
      v10 = *(int *)(a1 + 964);
      if ( (_DWORD)v10 == -1 )
        goto LABEL_12;
      v11 = *(_QWORD *)(a1 + 8 * v10 + 384);
      if ( v11 >= v7 && v9 >= v11 )
        goto LABEL_12;
      goto LABEL_5;
    default:
LABEL_5:
      result = 0;
      break;
  }
  return result;
}

