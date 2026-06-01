__int64 __fastcall sub_1A360(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 *a5, double a6)
{
  int v7; // eax
  __int64 v8; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r14
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rax
  __int64 result; // rax
  char v18; // al
  __int64 v19; // rax
  char byte; // al
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 segm_name; // rax
  char *v27; // rbp
  int v28; // r12d
  unsigned __int8 v29; // [rsp+Ch] [rbp-8Ch]
  __int64 v31; // [rsp+18h] [rbp-80h]
  __int64 v32; // [rsp+20h] [rbp-78h]
  int dword; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+38h] [rbp-60h] BYREF
  char *s1; // [rsp+40h] [rbp-58h] BYREF
  __int128 v36; // [rsp+48h] [rbp-50h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v7 = *a2;
  v8 = *(_QWORD *)(a2 + 1);
  v37 = __readfsqword(0x28u);
  v29 = v7;
  v31 = *(_QWORD *)(a2 + 3);
  v32 = *(_QWORD *)(a2 + 5);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 520LL) == 2 )
  {
    v18 = sub_3FDB0(a5);
    if ( v29 != 42 )
    {
      if ( v18 != 1 )
        return 0;
      if ( (unsigned __int8)is_loaded(v8) )
        goto LABEL_18;
LABEL_3:
      dword = 0;
      goto LABEL_4;
    }
  }
  if ( !(unsigned __int8)is_loaded(v8) )
    goto LABEL_3;
LABEL_18:
  dword = get_dword(v8, a2, v10, v11, v12);
LABEL_4:
  v13 = dword;
  if ( a2[7] )
    v13 = *(_QWORD *)(a4 + 16);
  if ( !(unsigned __int8)sub_193F0(a1, v29, v8, v31, v13, a3, a4, (__int64)a5) )
  {
    switch ( v29 )
    {
      case 0u:
        return 4;
      case 1u:
        v15 = dword;
        v14 = dword + v32;
        v16 = 0;
        goto LABEL_11;
      case 2u:
        v25 = getseg(v8);
        if ( !v25 || *(_BYTE *)(v25 + 184) == 2 )
          goto LABEL_33;
        s1 = nullptr;
        v36 = 0;
        segm_name = get_segm_name(&s1, v25, 0);
        v27 = s1;
        if ( segm_name <= 0 )
        {
          if ( s1 )
          {
            *(_QWORD *)&v36 = 0;
            qfree(s1);
          }
        }
        else if ( (_QWORD)v36 )
        {
          v28 = strcmp(s1, ".eh_frame");
          if ( v27 )
          {
            *(_QWORD *)&v36 = 0;
            qfree(v27);
          }
          if ( !v28 )
          {
            sub_42050(a1, v8, v13 + v31, 0, 0, 4, v8, 1342177280, 0);
            return 0;
          }
        }
        else if ( s1 )
        {
          qfree(s1);
        }
LABEL_33:
        v15 = dword;
        v16 = 0;
        v14 = dword + v32 - v8;
        goto LABEL_11;
      case 3u:
      case 0x2Bu:
        result = 5;
        if ( !a3 )
          return result;
        if ( (unsigned __int8)sub_43F30(v8, v13, 0)
          && (*(_WORD *)(*(_QWORD *)(a1 + 16) + 520LL) != 1
           || v29 != 43
           || !(unsigned __int8)sub_19330(a1, v8, v31, (__int64)a5))
          && (unsigned __int8)sub_54F40(a1, (unsigned int)&v34, (unsigned int)&s1, v8, v31, a3, (__int64)a5) )
        {
          sub_42050(a1, v8, (_DWORD)s1, (_DWORD)s1 - v34, 0, 4, v34, 0, 0);
        }
        return 0;
      case 4u:
        byte = get_byte(v8 - 1);
        sub_40E20(a1, v8 - (byte == -24), 0);
        goto LABEL_33;
      case 5u:
        sub_40E20(a1, v8, 2);
        return 0;
      case 6u:
        if ( (*(_BYTE *)(a1 + 346) & 1) != 0 )
          sub_19560(a1, v8, v32, (__int64)a5);
        goto LABEL_10;
      case 7u:
        if ( (*(_BYTE *)(a1 + 346) & 3) == 0 || (unsigned __int8)sub_19710(a1, a5, 0, v8, v32) )
        {
LABEL_10:
          v14 = v32;
          v15 = 0;
          v16 = 0;
LABEL_11:
          sub_42050(a1, v8, v32, v14, v15, 4, v16, 0, 0);
        }
        else
        {
          sub_EAA0(
            (__int64)"%a: could not patch the PLT stub; unexpected PLT format or the file has been modified after linking!\n",
            a6);
          if ( !*(_BYTE *)(a1 + 348) )
          {
            sub_BFC0(
              (__int64)"Unexpected entries in the PLT stub.\nThe file might have been modified after linking.",
              v8);
            *(_BYTE *)(a1 + 348) = 1;
          }
        }
        return 0;
      case 8u:
        sub_42050(a1, v8, dword, dword, 0, 4, 0, 0, 0);
        return 0;
      case 9u:
        v19 = sub_4A750(a5 + 2, a5[1], 1);
        if ( v19 )
          sub_424F0(a1, v8, v31, v13, 4, 0, v19, 0);
        return 0;
      case 0xAu:
        v32 = sub_4A750(a5 + 2, a5[1], 1);
        if ( !v32 )
          return 0;
        v15 = 0;
        v16 = v8 - dword;
        v14 = v32 + dword - v8;
        goto LABEL_11;
      case 0x2Au:
        sub_40E20(a1, v8, 4);
        if ( !a2[7] )
          v32 = dword;
        sub_1A230(a1, 0, v8, v32, (__int64)a5);
        sub_47DB0(a1, v32, v21, v22, v23, v24);
        v14 = v32;
        v15 = 0;
        v16 = 0;
        goto LABEL_11;
      default:
        return 2;
    }
  }
  return 0;
}
