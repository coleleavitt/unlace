unsigned __int64 __fastcall sub_19E230(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  size_t v4; // r15
  unsigned __int64 v5; // r14
  const void *v6; // r13
  unsigned __int64 v7; // r11
  unsigned int *v8; // rsi
  char *v10; // rsi
  __int64 v11; // rax
  char *v12; // rax
  unsigned __int64 v13; // [rsp+0h] [rbp-58h]
  unsigned __int64 v14; // [rsp+0h] [rbp-58h]
  char v15; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v2 = (_QWORD *)(a2 + 8);
  v16 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a2 + 24);
  if ( (_QWORD *)(a2 + 8) != v3 )
  {
    while ( 1 )
    {
      v4 = v3[5];
      v5 = *(_QWORD *)(a1 + 8);
      v6 = (const void *)v3[4];
      if ( !v4 )
        break;
      v7 = v5 + v4;
      if ( !__CFADD__(v5, v4) )
        goto LABEL_13;
      if ( v5 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v7 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_13:
        v10 = *(char **)a1;
        v11 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(a1 + 16) < v7 )
        {
          v14 = v7;
          v12 = (char *)sub_1987B0(a1, v10, v7, 1u);
          v7 = v14;
          *(_QWORD *)a1 = v12;
          v10 = v12;
          v11 = *(_QWORD *)(a1 + 8);
        }
        v13 = v7;
        memset(&v10[v11], 0, v7 - v11);
        *(_QWORD *)(a1 + 8) = v13;
        goto LABEL_6;
      }
      if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_16;
LABEL_6:
      memcpy((void *)(v5 + *(_QWORD *)a1), v6, v4);
      v8 = (unsigned int *)v3[7];
      if ( v3[5] && *(_BYTE *)v3[4] == 1 )
      {
        v15 = 0;
        sub_19E230(a1, v8);
        sub_19E170((char **)a1, &v15, 1u);
      }
      else
      {
        sub_19E170((char **)a1, v8, *v8 + 5LL);
      }
      v3 = (_QWORD *)std::_Rb_tree_increment(v3);
      if ( v2 == v3 )
        return v16 - __readfsqword(0x28u);
    }
    v4 = 1;
    v7 = v5 + 1;
    if ( v5 != -1 )
      goto LABEL_13;
LABEL_16:
    *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_6;
  }
  return v16 - __readfsqword(0x28u);
}
