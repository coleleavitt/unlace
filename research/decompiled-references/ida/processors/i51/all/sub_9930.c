__int64 __fastcall sub_9930(__int64 a1)
{
  __int64 *v1; // r12
  int v4; // ebp
  void *v5; // r14
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // rdx
  void *v9; // rdi
  __int64 v10; // rax
  size_t v11; // [rsp+8h] [rbp-70h]
  int v12; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 (__fastcall **v13)(); // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v1 = (__int64 *)(a1 + 128);
  v15 = __readfsqword(0x28u);
  v13 = off_FE28;
  v14 = a1 + 128;
  if ( (unsigned __int8)choose_ioport_device2() )
  {
    v12 = 5;
    if ( (unsigned __int8)sub_9560(5, &v12) )
    {
      v4 = v12;
      if ( *(_QWORD *)(a1 + 144) )
      {
        v5 = *(void **)(a1 + 136);
        if ( v5 )
        {
          v6 = strlen(*(const char **)(a1 + 136));
          v7 = v6;
          if ( v6 )
          {
            v8 = v6 + 1;
            v9 = v5;
            if ( *(_QWORD *)(a1 + 152) < v6 + 1 )
            {
              v11 = v6 + 1;
              v10 = qvector_reserve();
              v8 = v11;
              *(_QWORD *)(a1 + 136) = v10;
              v9 = (void *)v10;
            }
            *(_QWORD *)(a1 + 144) = v8;
            memmove(v9, v5, v7);
            *(_BYTE *)(*(_QWORD *)(a1 + 136) + v7) = 0;
            goto LABEL_12;
          }
LABEL_11:
          *(_QWORD *)(a1 + 144) = 0;
LABEL_12:
          netnode_supset();
          sub_8940(v1, v4 & 0xFFFFFFFD);
        }
      }
      else if ( byte_CF28 )
      {
        goto LABEL_11;
      }
    }
  }
  return 0;
}

