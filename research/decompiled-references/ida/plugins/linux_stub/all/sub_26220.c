__int64 __fastcall sub_26220(_BYTE *a1, int a2)
{
  unsigned int v2; // r12d
  const char *v3; // r15
  size_t v4; // rax
  __int64 v5; // rbx
  size_t v6; // r8
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  size_t na; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+8h] [rbp-80h]
  __int64 v14; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-70h]
  unsigned __int64 v16; // [rsp+20h] [rbp-68h]
  const char *v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( a1[68] )
  {
    if ( under_debugger )
      BUG();
    interr();
LABEL_25:
    exit(1);
  }
  v2 = 53;
  if ( a2 )
    v2 = 2 * (a2 > 0) + 52;
  sub_267D0(&v14, v2);
  v18 = 0;
  v17 = nullptr;
  sub_CC40((__int64 *)&v17);
  v3 = s;
  if ( !(_QWORD)v18 )
  {
    if ( s )
      goto LABEL_6;
LABEL_17:
    v5 = v15;
    v6 = 1;
    v3 = "";
    v7 = v15 + 1;
    if ( v15 == -1 )
    {
      v5 = -1;
      v3 = "";
      v15 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  v3 = v17;
  if ( !v17 )
    goto LABEL_17;
LABEL_6:
  v4 = strlen(v3);
  v5 = v15;
  v6 = v4 + 1;
  v7 = v4 + 1 + v15;
  if ( !__CFADD__(v4 + 1, v15) )
  {
LABEL_7:
    v8 = v14;
    v9 = v5;
    if ( v16 < v7 )
    {
      n = v6;
      v14 = qvector_reserve();
      v8 = v14;
      v6 = n;
      v9 = v15;
    }
    na = v6;
    memset((void *)(v8 + v9), 0, v7 - v9);
    v15 = v7;
    v6 = na;
    goto LABEL_10;
  }
  if ( v15 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_7;
  }
  if ( v15 != 0x7FFFFFFFFFFFFFFFLL )
    v15 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_10:
  memcpy((void *)(v14 + v5), v3, v6);
  (*(void (__fastcall **)(_BYTE *, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL))(a1, v2, &v14);
  qfree();
  if ( v2 == 52 )
    goto LABEL_25;
  v10 = ((_QWORD)v18 == 0) + (_QWORD)v18 - 1LL;
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  if ( v14 )
  {
    v15 = 0;
    qfree();
  }
  return v10;
}

