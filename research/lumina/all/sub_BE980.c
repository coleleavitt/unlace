__int64 __fastcall sub_BE980(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v7; // r13
  __int64 v9; // r15
  unsigned int v10; // r15d
  _QWORD *v11; // rbx
  bool v12; // zf
  void (__fastcall *v13)(_QWORD *); // rdx
  void (__fastcall *v14)(_QWORD *); // rax
  _QWORD *v16; // rbx
  void (__fastcall *v17)(_QWORD *); // rdx
  void (__fastcall *v18)(_QWORD *); // rax
  __int64 v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  char *v22; // rdi
  __int64 v23; // r12
  __int64 i; // rbp
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rdx
  _QWORD **v28; // rbp
  void (__fastcall *v29)(_QWORD *); // rdx
  void (__fastcall *v30)(_QWORD *); // rax
  _QWORD *v31; // rdi
  int v32; // eax
  int v33; // [rsp+14h] [rbp-54h] BYREF
  void *v34; // [rsp+18h] [rbp-50h] BYREF
  void *v35[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = qword_241DF8;
  v35[1] = (void *)__readfsqword(0x28u);
  sub_19A520(qword_241DF8);
  v9 = *(_QWORD *)(*(_QWORD *)a4 + 24LL);
  unk_241E58(&v34, a3);
  if ( !v34 )
  {
    v10 = 0;
    goto LABEL_9;
  }
  if ( (unsigned __int8)sub_2F9D0(a5, (__int64)&v34, (__int64)"I", v9) )
  {
    unk_241E60(v35, &v34, a5);
    if ( v35[0] )
    {
      v10 = unk_241E70(v35, a5);
      if ( (_BYTE)v10 )
      {
        sub_2F910(a5, (__int64)v35, (__int64)"si", a1, &v33);
        v32 = 0;
        if ( *(_QWORD *)(a1 + 8) > 1u )
          v32 = 1000 * v33;
        *a2 = v32;
        sub_33A10(v35);
        goto LABEL_4;
      }
      v16 = v35[0];
      if ( v35[0] )
      {
        v12 = (*((_DWORD *)v35[0] + 2))-- == 1;
        if ( v12 )
        {
          v17 = *(void (__fastcall **)(_QWORD *))*v16;
          if ( v17 == sub_BDAD0 )
          {
            v18 = *(void (__fastcall **)(_QWORD *))(*v16 + 16LL);
            if ( v18 == sub_BD890 )
            {
              v19 = v16[3];
              *v16 = &off_239DB0;
              if ( v19 )
              {
                mysql_free_result();
                v16[3] = 0;
              }
              v20 = (void *)v16[13];
              if ( v20 )
              {
                v16[14] = 0;
                j__free(v20);
              }
              v21 = (void *)v16[10];
              if ( v21 )
              {
                v16[11] = 0;
                j__free(v21);
              }
              v22 = (char *)v16[7];
              if ( v22 )
              {
                v23 = v16[8];
                if ( v23 )
                {
                  for ( i = 0; i != v23; ++i )
                  {
                    v25 = i;
                    sub_176520(&v22[32 * v25]);
                    v22 = (char *)v16[7];
                  }
                }
                v16[8] = 0;
                j__free(v22);
              }
              v26 = (void *)v16[4];
              if ( v26 )
              {
                v16[5] = 0;
                j__free(v26);
              }
              v27 = v16[2];
              if ( v27 )
              {
                v12 = (*(_DWORD *)(v27 + 8))-- == 1;
                if ( v12 )
                {
                  v28 = (_QWORD **)v16[2];
                  v29 = (void (__fastcall *)(_QWORD *))**v28;
                  if ( v29 == sub_BCB00 )
                  {
                    if ( v28 )
                    {
                      v30 = (void (__fastcall *)(_QWORD *))(*v28)[2];
                      v31 = (_QWORD *)v16[2];
                      if ( v30 == sub_BCAE0 )
                      {
                        sub_BC950(v31);
                        operator delete(v28, 0x458u);
                      }
                      else
                      {
                        v30(v31);
                      }
                    }
                  }
                  else
                  {
                    v29((_QWORD *)v16[2]);
                  }
                }
              }
              operator delete(v16, 0x80u);
            }
            else
            {
              v18(v16);
            }
          }
          else
          {
            v17(v16);
          }
        }
      }
    }
  }
  v10 = 0;
LABEL_4:
  v11 = v34;
  if ( v34 )
  {
    v12 = (*((_DWORD *)v34 + 2))-- == 1;
    if ( v12 )
    {
      v13 = *(void (__fastcall **)(_QWORD *))*v11;
      if ( v13 == sub_BCB00 )
      {
        v14 = *(void (__fastcall **)(_QWORD *))(*v11 + 16LL);
        if ( v14 == sub_BCAE0 )
        {
          sub_BC950(v11);
          operator delete(v11, 0x458u);
        }
        else
        {
          v14(v11);
        }
      }
      else
      {
        v13(v11);
      }
    }
  }
LABEL_9:
  sub_19A570(v7);
  return v10;
}
