unsigned __int64 sub_8CE0()
{
  __int64 v0; // rax
  __int64 v1; // r12
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  int *v4; // rax
  int *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  size_t v12; // rbx
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v20; // [rsp+8h] [rbp-90h]
  unsigned __int64 v21; // [rsp+10h] [rbp-88h]
  unsigned __int64 v22; // [rsp+10h] [rbp-88h]
  __int64 v23; // [rsp+18h] [rbp-80h]
  __int64 v24; // [rsp+18h] [rbp-80h]
  _QWORD *v25; // [rsp+20h] [rbp-78h]
  __int64 v26; // [rsp+30h] [rbp-68h] BYREF
  __int128 v27; // [rsp+38h] [rbp-60h]
  _BYTE src[10]; // [rsp+4Eh] [rbp-4Ah] BYREF
  unsigned __int64 v29[8]; // [rsp+58h] [rbp-40h] BYREF

  v29[0] = __readfsqword(0x28u);
  v20 = 1;
  if ( (unsigned __int64)qword_14518 > 1 )
  {
    while ( 1 )
    {
      v0 = netnode_altval(qword_14520, -3, (unsigned __int8)v20);
      v25 = (_QWORD *)getseg(v0);
      v1 = netnode_altval(qword_14520, -2, (unsigned __int8)v20);
      v27 = 0;
      v26 = 0;
      v26 = qvector_reserve(&v26, 0, 1, 1);
      *(_BYTE *)(v26 + v27) = 1;
      *(_QWORD *)&v27 = v27 + 1;
      if ( v1 )
        break;
      v17 = -1;
LABEL_21:
      v18 = ea2node(*v25);
      netnode_supset(v18, 29, v26, v27, 83);
      set_group_selector(v25[6], v17);
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
      }
      if ( ++v20 >= (unsigned __int64)qword_14518 )
        return v29[0] - __readfsqword(0x28u);
    }
    v2 = 0;
    while ( 1 )
    {
      v3 = netnode_altval(qword_14520, v2, (unsigned __int8)v20);
      v4 = (int *)qword_14550;
      if ( qword_14550 )
      {
        v5 = &dword_14548;
        do
        {
          while ( 1 )
          {
            v6 = *((_QWORD *)v4 + 2);
            v7 = *((_QWORD *)v4 + 3);
            if ( *((_QWORD *)v4 + 4) < v3 )
              break;
            v5 = v4;
            v4 = *((int **)v4 + 2);
            if ( !v6 )
              goto LABEL_9;
          }
          v4 = *((int **)v4 + 3);
        }
        while ( v7 );
LABEL_9:
        v8 = -1;
        if ( v5 != &dword_14548 && v3 >= *((_QWORD *)v5 + 4) )
          v8 = *((_QWORD *)v5 + 5);
      }
      else
      {
        v8 = -1;
      }
      v9 = getseg(v8);
      v10 = v9;
      if ( !v9 )
        sub_86C0(v3);
      v11 = pack_dq(src, v29, *(_QWORD *)(v9 + 48)) - (_QWORD)src;
      v12 = v11;
      if ( !v11 )
        goto LABEL_19;
      v13 = v27;
      v14 = v27 + v11;
      if ( __CFADD__((_QWORD)v27, v11) )
      {
        if ( (unsigned __int64)v27 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v27 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v27 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_18;
        }
        v14 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v15 = v26;
      v16 = v27;
      if ( *((_QWORD *)&v27 + 1) < v14 )
      {
        v24 = v27;
        v22 = v14;
        v26 = qvector_reserve(&v26, v26, v14, 1);
        v15 = v26;
        v13 = v24;
        v16 = v27;
        v14 = v22;
      }
      v23 = v13;
      v21 = v14;
      memset((void *)(v15 + v16), 0, v14 - v16);
      v13 = v23;
      *(_QWORD *)&v27 = v21;
LABEL_18:
      memcpy((void *)(v13 + v26), src, v12);
LABEL_19:
      if ( ++v2 == v1 )
      {
        v17 = *(_QWORD *)(v10 + 48);
        goto LABEL_21;
      }
    }
  }
  return v29[0] - __readfsqword(0x28u);
}
