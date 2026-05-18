__int64 __fastcall sub_117B90(__int64 a1, char a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r15d
  char v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  void *v19; // r12
  __int64 v20; // rax
  int v21; // edx
  __int64 i; // rax
  int v23; // eax
  char v24; // al
  int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rdx
  char v28; // [rsp+Fh] [rbp-79h]
  unsigned __int64 v29; // [rsp+10h] [rbp-78h]
  unsigned int v30; // [rsp+18h] [rbp-70h]
  unsigned __int16 v31; // [rsp+1Ch] [rbp-6Ch]
  unsigned __int16 v32; // [rsp+1Eh] [rbp-6Ah]
  unsigned int v33; // [rsp+2Ch] [rbp-5Ch] BYREF
  _BYTE v34[16]; // [rsp+30h] [rbp-58h] BYREF
  int v35; // [rsp+40h] [rbp-48h]
  unsigned __int16 v36; // [rsp+44h] [rbp-44h]
  unsigned __int16 v37; // [rsp+46h] [rbp-42h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v38 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v3 + 8);
  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 <= 2u )
    {
      v16 = 76146;
LABEL_44:
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        v16,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return 11;
    }
    result = sub_1171C0(a1);
    v33 = result;
    if ( (_DWORD)result || *(_BYTE *)a1 )
      return result;
  }
  v6 = *(_QWORD *)(a1 + 136);
  v31 = *(_WORD *)(a1 + 86);
  if ( v31 >= *(_WORD *)(v6 + 24) )
  {
    v16 = 76155;
    goto LABEL_44;
  }
  v7 = *(unsigned int *)(v6 + 20);
  v28 = *(_BYTE *)(a1 + 84);
  v8 = *(_QWORD *)(v6 + 80)
     + (unsigned __int16)(*(_WORD *)(v6 + 26) & __ROL2__(*(_WORD *)(*(_QWORD *)(v6 + 96) + 2 * v31), 8));
  if ( (int)v7 < 0 )
  {
    v23 = sub_E9270(v6);
    v16 = 76159;
    if ( v23 )
      goto LABEL_44;
  }
  LOBYTE(v9) = *(_BYTE *)(v6 + 8);
  if ( (a2 & 2) != 0 )
  {
    if ( !(_BYTE)v9
      || (v10 = *(_DWORD *)(v6 + 20),
          v7 = v10 + (unsigned int)(*(unsigned __int16 (__fastcall **)(__int64, __int64))(v6 + 120))(v6, v8) + 2,
          (int)v7 > (int)(2 * *(_DWORD *)(v4 + 56) / 3u))
      || *(_WORD *)(v6 + 24) == 1 )
    {
      result = sub_115E20(a1, v7);
      v33 = result;
      if ( (_DWORD)result )
        return result;
      v9 = *(unsigned __int8 *)(v6 + 8);
      v11 = 1;
    }
    else
    {
      LOBYTE(v9) = *(_BYTE *)(v6 + 8);
      v11 = 2;
    }
  }
  else
  {
    v11 = 0;
  }
  if ( (_BYTE)v9 || (result = sub_117400(a1), (v33 = result) == 0) )
  {
    if ( (*(_BYTE *)(a1 + 1) & 0x20) == 0
      || (v7 = *(unsigned int *)(a1 + 80), result = sub_115FA0(*(_QWORD *)(v4 + 16), v7, a1), (v33 = result) == 0) )
    {
      if ( !*(_QWORD *)(a1 + 128) )
      {
        if ( *(_BYTE *)(v3 + 19) )
        {
          v20 = *(_QWORD *)(v3 + 8);
          v7 = *(_QWORD *)(a1 + 48);
          v21 = *(_DWORD *)(a1 + 80);
          *(_BYTE *)(v3 + 19) = 0;
          for ( i = *(_QWORD *)(v20 + 16); i; i = *(_QWORD *)(i + 40) )
          {
            if ( (*(_BYTE *)(i + 1) & 0x10) != 0 )
            {
              *(_BYTE *)(v3 + 19) = 1;
              if ( v21 == *(_DWORD *)(i + 80) && v7 == *(_QWORD *)(i + 48) )
                *(_BYTE *)i = 1;
            }
          }
        }
      }
      result = sub_10D290(*(_QWORD *)(v6 + 112), v7);
      v33 = result;
      if ( !(_DWORD)result )
      {
        (*(void (__fastcall **)(__int64, __int64, _BYTE *))(v6 + 128))(v6, v8, v34);
        if ( v36 == v35 )
        {
          v33 = 0;
        }
        else
        {
          result = sub_112DB0(*(_QWORD *)(v6 + 72), *(_QWORD *)(v6 + 88), v8, v35, v36, v37);
          v33 = result;
          if ( (_DWORD)result )
            return result;
        }
        v12 = v31;
        sub_E96F0(v6, v31, v37, &v33);
        result = v33;
        if ( v33 )
          return result;
        v13 = *(_QWORD *)(a1 + 136);
        v14 = *(_DWORD *)(v13 + 20);
        if ( !*(_BYTE *)(v6 + 8) )
        {
          if ( v14 < 0 )
          {
            result = sub_E9270(*(_QWORD *)(a1 + 136));
            v33 = result;
            if ( (_DWORD)result )
              return result;
          }
          if ( *(char *)(a1 + 84) - 1 <= v28 )
            v30 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4LL);
          else
            v30 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * (v28 + 1) + 144) + 4LL);
          v15 = *(_QWORD *)(v13 + 80);
          v16 = 76250;
          v17 = v15
              + (unsigned __int16)(*(_WORD *)(v13 + 26)
                                 & __ROL2__(
                                     *(_WORD *)(*(_QWORD *)(v13 + 96) + 2 * *(unsigned __int16 *)(v13 + 24) - 2),
                                     8));
          if ( v17 < v15 + 4 )
            goto LABEL_44;
          v18 = v17;
          v29 = v17;
          v32 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64, __int64, char *))(v13 + 120))(
                  v13,
                  v17,
                  v17,
                  76250,
                  "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
          v19 = *(void **)(v4 + 136);
          result = sub_10D290(*(_QWORD *)(v13 + 112), v18);
          v33 = result;
          if ( (_DWORD)result )
            return result;
          sub_112FD0(v6, v31, (_DWORD *)(v29 - 4), v32 + 4, v19, v30, (int *)&v33);
          result = v33;
          v12 = (unsigned int)*(unsigned __int16 *)(v13 + 24) - 1;
          if ( v33 )
            return result;
          sub_E96F0(v13, v12, v32, &v33);
          result = v33;
          if ( v33 )
            return result;
          v14 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL);
        }
        if ( 3 * v14 > 2 * *(_DWORD *)(*(_QWORD *)(a1 + 32) + 56LL) )
        {
          result = sub_114FD0(a1, v12);
          v33 = result;
          if ( (_DWORD)result )
            return result;
        }
        else
        {
          v33 = 0;
        }
        if ( v28 >= *(char *)(a1 + 84) )
          goto LABEL_39;
        sub_C36A0(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 112LL));
        v24 = *(_BYTE *)(a1 + 84) - 1;
        *(_BYTE *)(a1 + 84) = v24;
LABEL_66:
        v25 = 0;
        v26 = (unsigned int)v24;
        while ( 1 )
        {
          v27 = *(_QWORD *)(a1 + 8LL * ((int)v26 - v25) + 144);
          if ( v28 >= v24 )
            break;
          --v24;
          ++v25;
          *(_BYTE *)(a1 + 84) = v24;
          if ( v27 )
          {
            sub_C36A0(*(_QWORD *)(v27 + 112));
            v24 = *(_BYTE *)(a1 + 84);
            goto LABEL_66;
          }
        }
        *(_QWORD *)(a1 + 136) = v27;
        result = sub_114FD0(a1, v26);
        v33 = result;
        if ( !(_DWORD)result )
        {
LABEL_39:
          if ( v11 == 2 )
          {
            *(_BYTE *)a1 = 2;
            if ( v31 < *(_WORD *)(v6 + 24) )
            {
              *(_DWORD *)(a1 + 4) = 1;
            }
            else
            {
              *(_DWORD *)(a1 + 4) = -1;
              *(_WORD *)(a1 + 86) = *(_WORD *)(v6 + 24) - 1;
            }
            return v33;
          }
          else
          {
            result = sub_EC330(a1);
            v33 = result;
            if ( v11 )
            {
              if ( *(char *)(a1 + 84) >= 0 )
              {
                sub_CCD80(a1);
                result = v33;
              }
              *(_BYTE *)a1 = 3;
            }
            if ( (_DWORD)result == 16 )
              return 0;
          }
        }
      }
    }
  }
  return result;
}
