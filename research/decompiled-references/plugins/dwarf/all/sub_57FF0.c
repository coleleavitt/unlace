__int64 __fastcall sub_57FF0(__int64 a1, __int64 *a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // rdx
  __int64 idati; // rax
  __int64 v11; // [rsp+8h] [rbp-60h] BYREF
  const char *v12; // [rsp+10h] [rbp-58h] BYREF
  __int128 v13; // [rsp+18h] [rbp-50h]
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v15; // [rsp+40h] [rbp-28h]
  unsigned __int64 v16; // [rsp+48h] [rbp-20h]

  v3 = 1;
  v4 = *a2;
  v16 = __readfsqword(0x28u);
  if ( get_tinfo_property(v4, 5) )
    return v3;
  v6 = *a2;
  v3 = 0;
  v12 = nullptr;
  v13 = 0;
  if ( (v6 & 0x100) == 0 )
    return v3;
  if ( !get_tinfo_pdata(&v12, v6, 2) )
    goto LABEL_13;
  v9 = src;
  v11 = 0;
  if ( (_QWORD)v13 )
    v9 = v12;
  if ( !v9 )
    goto LABEL_12;
  idati = *(_QWORD *)(a1 + 8);
  v14[1] = v9;
  v15 = 256;
  if ( !idati )
    idati = get_idati(&v12, v6, v9, 256, v7, v8);
  v14[0] = idati;
  v3 = create_tinfo(&v11, 61, 61, v14);
  if ( !(_BYTE)v3 || !get_tinfo_property(v11, 5) )
  {
LABEL_12:
    clear_tinfo_t(&v11);
LABEL_13:
    v3 = 0;
    goto LABEL_14;
  }
  clear_tinfo_t(&v11);
LABEL_14:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v3;
}
