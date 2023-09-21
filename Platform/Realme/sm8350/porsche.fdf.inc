#// per-device BSP DXEs
#FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
#  SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm8350/ButtonsDxe/ButtonsDxe.depex
#  SECTION PE32 = Platform/EFI_Binaries/Drivers/sm8350/ButtonsDxe/ButtonsDxe.efi
#  SECTION UI = "ButtonsDxe"
#}
// ACPI Tables

// Mainline device tree blob
FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
  SECTION RAW = Platform/Realme/sm8350/FdtBlob_compat/porsche.dtb
}
