__int64 __fastcall sub_15F8D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned int v9; // ebp
  char v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r13d
  _QWORD *v15; // rax
  char *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdi
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdi
  _QWORD *v29; // rsi
  __int16 v30; // si
  __int64 v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-1E8h]
  bool v33; // [rsp+8h] [rbp-1E0h]
  _QWORD *v34; // [rsp+8h] [rbp-1E0h]
  __int64 v35; // [rsp+10h] [rbp-1D8h] BYREF
  _QWORD *v36; // [rsp+18h] [rbp-1D0h]
  __int64 v37; // [rsp+20h] [rbp-1C8h]
  int v38; // [rsp+D8h] [rbp-110h]
  char v39; // [rsp+E7h] [rbp-101h]
  char v40; // [rsp+134h] [rbp-B4h]
  _QWORD *v41; // [rsp+160h] [rbp-88h]
  unsigned __int64 v42; // [rsp+1A8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 24);
  v42 = __readfsqword(0x28u);
  if ( v7 )
    xmmword_241500(v7);
  v8 = *(_QWORD *)(a1 + 560);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 24);
    if ( !v9 )
    {
      v32 = *(_QWORD *)(v8 + 8);
      sub_E3CE0(&v35, a1);
      v10 = *(_BYTE *)(a1 + 197);
      *(_BYTE *)(a1 + 197) = 0;
      v40 = 1;
      v39 = 1;
      v38 = 1;
      v14 = sub_1565D0((__int64)&v35, (unsigned __int8 *)a2);
      if ( v14 || (v15 = v41) == nullptr || *(_BYTE *)(a1 + 103) || *((_BYTE *)v41 + 63) )
      {
        v16 = "%s";
        if ( !v36 )
          v16 = nullptr;
        sub_F63C0(a1, 1, v16);
        a2 = (__int64)v36;
        if ( v36 )
          sub_C9250(a1, v36);
        v18 = v37;
        v40 = 0;
        if ( !v37 )
        {
          v14 = 1;
          sub_D8230(a1, v41);
          sub_D7990((__int64)&v35);
          *(_BYTE *)(a1 + 197) = v10;
          goto LABEL_25;
        }
        v33 = 1;
        v14 = 1;
      }
      else
      {
        v17 = v32;
        v33 = 0;
        if ( !*(_QWORD *)(v32 + 8) )
        {
          *(_QWORD *)(v32 + 8) = v41[1];
          v29 = (_QWORD *)v15[10];
          if ( v29 )
          {
            v34 = v15;
            sub_D7810(a1, v29);
            v15 = v34;
          }
          v30 = *((_WORD *)v15 + 27);
          *(_WORD *)(v32 + 54) = v30;
          *(_WORD *)(v32 + 56) = v30;
          a2 = v15[6] & 0x280;
          *(_DWORD *)(v32 + 48) |= a2;
          v17 = 0;
          v24 = *((_BYTE *)v15 + 48) >= 0;
          *((_WORD *)v15 + 27) = 0;
          v15[1] = 0;
          v31 = v15[2];
          if ( v24 )
          {
            v33 = 0;
          }
          else
          {
            v33 = 0;
            a2 = **(_QWORD **)(*(_QWORD *)v8 + 8LL);
            if ( *(_QWORD *)(a2 + 104) )
            {
              if ( v31 )
              {
                v11 = v15[2];
                if ( (*(_BYTE *)(v31 + 99) & 3) != 2 )
                {
                  do
                  {
                    v11 = *(_QWORD *)(v11 + 40);
                    if ( !v11 )
                      break;
                    a2 = *(_BYTE *)(v11 + 99) & 3;
                  }
                  while ( (_BYTE)a2 != 2 );
                }
              }
              else
              {
                v11 = 0;
              }
              v33 = *(_WORD *)(v11 + 94) != 1;
              v14 = v33;
            }
          }
          if ( v31 )
          {
            v17 = v32;
            *(_QWORD *)(v32 + 16) = v31;
            v15[2] = 0;
            *(_QWORD *)(v31 + 24) = v32;
          }
        }
        v18 = v37;
        *(_DWORD *)(v8 + 24) = 1;
        v40 = 0;
        if ( !v18 )
        {
LABEL_16:
          v19 = v41;
          sub_D8230(a1, v41);
          sub_D7990((__int64)&v35);
          v24 = *(_BYTE *)(a1 + 103) == 0;
          *(_BYTE *)(a1 + 197) = v10;
          if ( v24 && !v33 )
          {
LABEL_18:
            v25 = *(_QWORD *)(a1 + 24);
            if ( v25 )
              xmmword_241510(v25, v19, v20);
            return v9;
          }
LABEL_25:
          v19 = (_QWORD *)v14;
          v9 = sub_D42C0(a1, v14, v20, v21, v22, v23);
          goto LABEL_18;
        }
      }
      sub_11E630(v18, a2, v17, v11, v12, v13);
      goto LABEL_16;
    }
  }
  *(_DWORD *)(a1 + 80) = 21;
  sub_CA220((__int64 *)a1, 21, a3, a4, a5, a6);
  v27 = *(_QWORD *)(a1 + 24);
  if ( v27 )
    xmmword_241510(v27, 21, v26);
  v9 = 21;
  sub_E8BB0(
    0x15u,
    "%s at line %d of [%.10s]",
    "misuse",
    147513,
    "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  return v9;
}
