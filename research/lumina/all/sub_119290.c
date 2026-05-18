__int64 __fastcall sub_119290(__int64 a1, _BYTE *a2, int a3)
{
  unsigned int v3; // ebp
  __int64 *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r12d
  bool v11; // zf
  __int64 *v12; // r12
  __int64 j; // rdi
  __int64 i; // rax
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdi
  int v19; // eax
  signed int v20; // r15d
  unsigned int v21; // r9d
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 *v31; // r14
  __int64 k; // rdi
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // [rsp+0h] [rbp-68h]
  unsigned int v36; // [rsp+Ch] [rbp-5Ch]
  __int64 v37; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int32 v38; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v39; // [rsp+28h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 48);
  v39 = __readfsqword(0x28u);
  if ( !v3 )
  {
    if ( qword_241610 && (unsigned int)qword_241610(400) )
      return 10;
    if ( *(_BYTE *)(a1 + 21) > 2u )
    {
      if ( *(_BYTE *)(a1 + 16) && (!**(_QWORD **)(a1 + 72) || !(unsigned int)sub_CC170(a1)) )
      {
        for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 64) )
          *(_DWORD *)(i + 24) = 1;
LABEL_15:
        if ( !*(_QWORD *)(a1 + 296) )
          *(_BYTE *)(a1 + 21) = 5;
        return v3;
      }
      if ( *(_QWORD *)(a1 + 296) )
      {
        v6 = *(__int64 **)(a1 + 288);
        v37 = 0;
        v7 = *v6;
        if ( *v6 )
        {
          do
          {
            v8 = *(_QWORD *)(v7 + 56);
            *(_QWORD *)(v7 + 32) = v8;
            v7 = v8;
          }
          while ( v8 );
          v7 = *v6;
        }
        v9 = sub_C8CA0(v7);
        if ( v9
          || (v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(a1 + 272))(a1, 1, &v37, 0),
              v9 = v37,
              v11 = v37 == 0,
              *(_QWORD *)(v37 + 32) = 0,
              !v11) )
        {
          v10 = sub_10D580(a1, v9, *(_DWORD *)(a1 + 32), 1);
          if ( v37 )
            sub_C36A0(v37);
        }
        if ( !v10 )
        {
          v12 = *(__int64 **)(a1 + 288);
          for ( j = *v12; *v12; j = *v12 )
            sub_CBAD0(j);
          goto LABEL_15;
        }
        return v10;
      }
      if ( !*(_BYTE *)(a1 + 23) && *(_DWORD *)(a1 + 32) )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(a1 + 272))(a1, 1, &v37, 0);
        if ( v16 || (v16 = sub_10D290(v37, 1)) != 0 )
        {
          if ( v37 )
          {
            v35 = v16;
            sub_C36A0(v37);
            return v35;
          }
          return v16;
        }
        if ( v37 )
        {
          sub_D5B40(v37);
          v17 = v37;
          *(_BYTE *)(a1 + 23) = 1;
          if ( v17 )
            sub_C36A0(v17);
        }
        else
        {
          *(_BYTE *)(a1 + 23) = 1;
        }
      }
      if ( !a2 )
        goto LABEL_68;
      if ( *(_BYTE *)(a1 + 9) == 4 )
        goto LABEL_68;
      v18 = *(_QWORD *)(a1 + 80);
      if ( !*(_QWORD *)v18 )
        goto LABEL_68;
      *(_BYTE *)(a1 + 24) = 1;
      v19 = (char)*a2;
      v20 = 0;
      v21 = 0;
      if ( *a2 )
      {
        do
        {
          ++v20;
          v21 += v19;
          v19 = (char)a2[v20];
        }
        while ( a2[v20] );
      }
      v22 = *(_QWORD *)(a1 + 96);
      if ( *(_BYTE *)(a1 + 12) )
      {
        if ( v22 )
          v22 = *(unsigned int *)(a1 + 184) * ((v22 - 1) / *(unsigned int *)(a1 + 184) + 1);
        *(_QWORD *)(a1 + 96) = v22;
      }
      v36 = v21;
      v38 = _byteswap_ulong(*(_DWORD *)(a1 + 192));
      v16 = (*(__int64 (__fastcall **)(__int64, unsigned __int32 *, __int64, __int64))(*(_QWORD *)v18 + 24LL))(
              v18,
              &v38,
              4,
              v22);
      if ( !v16 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, __int64))(**(_QWORD **)(a1 + 80) + 24LL))(
                *(_QWORD *)(a1 + 80),
                a2,
                (unsigned int)v20,
                v22 + 4);
        if ( !v16 )
        {
          v23 = *(_QWORD *)(a1 + 80);
          v24 = v20 + v22;
          v38 = _byteswap_ulong(v20);
          v16 = (*(__int64 (__fastcall **)(__int64, unsigned __int32 *, __int64, __int64))(*(_QWORD *)v23 + 24LL))(
                  v23,
                  &v38,
                  4,
                  v24 + 4);
          if ( !v16 )
          {
            v25 = *(_QWORD *)(a1 + 80);
            v38 = _byteswap_ulong(v36);
            v16 = (*(__int64 (__fastcall **)(__int64, unsigned __int32 *, __int64, __int64))(*(_QWORD *)v25 + 24LL))(
                    v25,
                    &v38,
                    4,
                    v24 + 8);
            if ( !v16 )
            {
              v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, __int64))(**(_QWORD **)(a1 + 80) + 24LL))(
                      *(_QWORD *)(a1 + 80),
                      &qword_1BEC00,
                      8,
                      v24 + 12);
              if ( !v16 )
              {
                v26 = *(_QWORD *)(a1 + 80);
                *(_QWORD *)(a1 + 96) += v20 + 20;
                v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, &v37);
                if ( !v16
                  && (*(_QWORD *)(a1 + 96) >= v37
                   || (v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 32LL))(*(_QWORD *)(a1 + 80))) == 0) )
                {
LABEL_68:
                  v16 = sub_118D50(a1, 0);
                  if ( !v16 )
                  {
                    v27 = *(__int64 **)(a1 + 288);
                    v28 = *v27;
                    if ( *v27 )
                    {
                      do
                      {
                        v29 = *(_QWORD *)(v28 + 56);
                        *(_QWORD *)(v28 + 32) = v29;
                        v28 = v29;
                      }
                      while ( v29 );
                    }
                    v30 = sub_C8CA0(*v27);
                    v16 = sub_10DF70((_QWORD *)a1, v30);
                    if ( !v16 )
                    {
                      v31 = *(__int64 **)(a1 + 288);
                      for ( k = *v31; *v31; k = *v31 )
                        sub_CBAD0(k);
                      v33 = *(_DWORD *)(a1 + 32);
                      if ( v33 > *(_DWORD *)(a1 + 40) )
                      {
                        v34 = sub_C6390(a1, v33 - (*(_DWORD *)(a1 + 192) == v33));
                        if ( v34 )
                          return v34;
                      }
                      if ( a3 )
                        goto LABEL_15;
                      v10 = sub_CC330(a1, (__int64)a2);
                      if ( !v10 )
                        goto LABEL_15;
                      return v10;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return v16;
    }
  }
  return v3;
}
